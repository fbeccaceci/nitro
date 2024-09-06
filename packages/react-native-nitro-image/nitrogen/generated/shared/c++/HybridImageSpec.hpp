///
/// HybridImageSpec.hpp
/// Fri Sep 06 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

// Forward declaration of `ImageSize` to properly resolve imports.
namespace margelo::nitro::image { struct ImageSize; }
// Forward declaration of `PixelFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class PixelFormat; }
// Forward declaration of `ImageFormat` to properly resolve imports.
namespace margelo::nitro::image { enum class ImageFormat; }

#include "ImageSize.hpp"
#include "PixelFormat.hpp"
#include "ImageFormat.hpp"
#include <string>
#include <functional>

namespace margelo::nitro::image {

  using namespace margelo::nitro;

  /**
   * An abstract base class for `Image`
   * Inherit this class to create instances of `HybridImageSpec` in C++.
   * @example
   * ```cpp
   * class HybridImage: public HybridImageSpec {
   *   // ...
   * };
   * ```
   */
  class HybridImageSpec: public virtual HybridObject {
    public:
      // Constructor
      explicit HybridImageSpec(): HybridObject(TAG) { }

      // Destructor
      virtual ~HybridImageSpec() { }

    public:
      // Properties
      virtual ImageSize getSize() = 0;
      virtual PixelFormat getPixelFormat() = 0;
      virtual double getSomeSettableProp() = 0;
      virtual void setSomeSettableProp(double someSettableProp) = 0;

    public:
      // Methods
      virtual double toArrayBuffer(ImageFormat format) = 0;
      virtual void saveToFile(const std::string& path, const std::function<void(const std::string& /* path */)>& onFinished) = 0;

    protected:
      // Hybrid Setup
      void loadHybridMethods() override;

    protected:
      // Tag for logging
      static constexpr auto TAG = "Image";
  };

} // namespace margelo::nitro::image
