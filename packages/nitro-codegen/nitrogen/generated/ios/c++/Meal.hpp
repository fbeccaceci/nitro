///
/// Meal.hpp
/// Tue Jul 16 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#include <NitroModules/JSIConverter.hpp>



struct Meal {
public:
  bool isVegan;
  double tastyness;
};

namespace margelo {

  // C++ Meal <> JS Meal (object)
  template <>
  struct JSIConverter<Meal> {
    static Meal fromJSI(jsi::Runtime& runtime, const jsi::Value& arg) {
      jsi::Object obj = arg.asObject(runtime);
      return Meal {
        .isVegan = JSIConverter<bool>::fromJSI(runtime, obj.getProperty(runtime, "isVegan")),
        .tastyness = JSIConverter<double>::fromJSI(runtime, obj.getProperty(runtime, "tastyness")),
      };
    }
    static jsi::Value toJSI(jsi::Runtime& runtime, const Meal& arg) {
      jsi::Object obj(runtime);
      obj.setProperty(runtime, "isVegan", JSIConverter<bool>::toJSI(runtime, arg.isVegan));
      obj.setProperty(runtime, "tastyness", JSIConverter<double>::toJSI(runtime, arg.tastyness));
      return obj;
    }
  };

} // namespace margelo