import { NitroConfig } from '../config/NitroConfig.js'
import { indent } from '../stringUtils.js'
import type { SourceFile } from '../syntax/SourceFile.js'
import path from 'path'

interface RubyFile extends Omit<SourceFile, 'language'> {
  language: 'cmake'
}

function isCppFile(file: SourceFile): boolean {
  return file.name.endsWith('cpp') || file.name.endsWith('c')
}

function getRelativeDirectory(file: SourceFile): string {
  return path.join(
    '..',
    'nitrogen',
    'generated',
    file.platform,
    ...file.subdirectory,
    file.name
  )
}

export function createCMakeExtension(files: SourceFile[]): RubyFile {
  const name = NitroConfig.getAndroidCxxLibName()
  const sharedFiles = files
    .filter((f) => f.platform === 'shared' && isCppFile(f))
    .map((f) => getRelativeDirectory(f))
  const androidFiles = files
    .filter((f) => f.platform === 'android' && isCppFile(f))
    .map((f) => getRelativeDirectory(f))

  const code = `
# A CMake file that adds all files generated by Nitrogen
# to the current CMake project.
#
# To use it, add this to your CMakeLists.txt:
# \`\`\`cmake
# include(\${CMAKE_SOURCE_DIR}/../nitrogen/generated/android/${name}+autolinking.cmake)
# \`\`\`
#

# Add all headers that were generated by Nitrogen
include_directories(
  "../nitrogen/generated/shared/c++"
  "../nitrogen/generated/android/c++"
)

# Add all .cpp sources that were generated by Nitrogen
target_sources(
  # CMake project name (Android C++ library name)
  ${name}
  # Shared Nitrogen C++ sources
  ${indent(sharedFiles.join('\n'), '  ')}
  # Android-specific Nitrogen C++ sources
  ${indent(androidFiles.join('\n'), '  ')}
)
  `.trim()
  return {
    content: code,
    language: 'cmake',
    name: `${name}+autolinking.cmake`,
    platform: 'android',
    subdirectory: [],
  }
}
