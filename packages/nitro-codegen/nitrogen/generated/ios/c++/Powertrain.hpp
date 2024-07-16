///
/// Powertrain.hpp
/// Tue Jul 16 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#include <NitroModules/JSIConverter.hpp>

enum class Powertrain {
  ELECTRIC = 0,
  GAS = 1,
};

namespace margelo {

  // C++ Powertrain <> JS Powertrain (enum)
  template <>
  struct JSIConverter<Powertrain> {
    static Powertrain fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      int enumValue = JSIConverter<int>::fromJSI(runtime, arg);
      return static_cast<Powertrain>(enumValue);
    }
    static jsi::Value toJSI(jsi::Runtime& runtime, Powertrain arg) {
      int enumValue = static_cast<int>(arg);
      return JSIConverter<int>::toJSI(enumValue);
    }
  };

} // namespace margelo