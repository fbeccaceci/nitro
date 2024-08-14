///
/// HybridSwiftKotlinTestObjectSpecSwift.hpp
/// Wed Aug 14 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include "HybridSwiftKotlinTestObjectSpec.hpp"

// Forward declaration of `HybridSwiftKotlinTestObjectSpecCxx` to properly resolve imports.
namespace NitroImage { class HybridSwiftKotlinTestObjectSpecCxx; }

// Forward declaration of `Person` to properly resolve imports.
namespace margelo::nitro::image { struct Person; }

#include "Person.hpp"

#if __has_include(<NitroModules/HybridContext.hpp>)
#include <NitroModules/HybridContext.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed NitroModules properly?
#endif

#include "NitroImage-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::image {

  /**
   * The C++ part of HybridSwiftKotlinTestObjectSpecCxx.swift.
   *
   * HybridSwiftKotlinTestObjectSpecSwift (C++) accesses HybridSwiftKotlinTestObjectSpecCxx (Swift), and might
   * contain some additional bridging code for C++ <> Swift interop.
   *
   * Since this obviously introduces an overhead, I hope at some point in
   * the future, HybridSwiftKotlinTestObjectSpecCxx can directly inherit from the C++ class HybridSwiftKotlinTestObjectSpec
   * to simplify the whole structure and memory management.
   */
  class HybridSwiftKotlinTestObjectSpecSwift final: public HybridSwiftKotlinTestObjectSpec {
  public:
    // Constructor from a Swift instance
    explicit HybridSwiftKotlinTestObjectSpecSwift(const NitroImage::HybridSwiftKotlinTestObjectSpecCxx& swiftPart): HybridSwiftKotlinTestObjectSpec(), _swiftPart(swiftPart) { }

  public:
    // Get the Swift part
    inline NitroImage::HybridSwiftKotlinTestObjectSpecCxx getSwiftPart() noexcept { return _swiftPart; }

  public:
    // Get memory pressure
    inline size_t getExternalMemorySize() noexcept override {
      return _swiftPart.getMemorySize();
    }

  public:
    // Properties
    inline double getNumberValue() noexcept override {
      return _swiftPart.getNumberValue();
    }
    inline void setNumberValue(double numberValue) noexcept override {
      _swiftPart.setNumberValue(std::forward<decltype(numberValue)>(numberValue));
    }
    inline bool getBoolValue() noexcept override {
      return _swiftPart.getBoolValue();
    }
    inline void setBoolValue(bool boolValue) noexcept override {
      _swiftPart.setBoolValue(std::forward<decltype(boolValue)>(boolValue));
    }
    inline std::string getStringValue() noexcept override {
      auto result = _swiftPart.getStringValue();
      return result;
    }
    inline void setStringValue(const std::string& stringValue) noexcept override {
      _swiftPart.setStringValue(stringValue);
    }
    inline int64_t getBigintValue() noexcept override {
      return _swiftPart.getBigintValue();
    }
    inline void setBigintValue(int64_t bigintValue) noexcept override {
      _swiftPart.setBigintValue(std::forward<decltype(bigintValue)>(bigintValue));
    }
    inline std::optional<std::string> getStringOrUndefined() noexcept override {
      auto result = _swiftPart.getStringOrUndefined();
      return result;
    }
    inline void setStringOrUndefined(const std::optional<std::string>& stringOrUndefined) noexcept override {
      _swiftPart.setStringOrUndefined(stringOrUndefined);
    }
    inline std::optional<std::string> getStringOrNull() noexcept override {
      auto result = _swiftPart.getStringOrNull();
      return result;
    }
    inline void setStringOrNull(const std::optional<std::string>& stringOrNull) noexcept override {
      _swiftPart.setStringOrNull(stringOrNull);
    }
    inline std::optional<std::string> getOptionalString() noexcept override {
      auto result = _swiftPart.getOptionalString();
      return result;
    }
    inline void setOptionalString(const std::optional<std::string>& optionalString) noexcept override {
      _swiftPart.setOptionalString(optionalString);
    }
    inline std::unordered_map<std::string, double> getSomeMap() noexcept override {
      auto result = _swiftPart.getSomeMap();
      return result;
    }
    inline void setSomeMap(const std::unordered_map<std::string, double>& someMap) noexcept override {
      _swiftPart.setSomeMap(someMap);
    }
    inline std::vector<std::string> getSomeArray() noexcept override {
      auto result = _swiftPart.getSomeArray();
      return result;
    }
    inline void setSomeArray(const std::vector<std::string>& someArray) noexcept override {
      _swiftPart.setSomeArray(someArray);
    }
    inline std::optional<std::string> getSomeOptional() noexcept override {
      auto result = _swiftPart.getSomeOptional();
      return result;
    }
    inline void setSomeOptional(const std::optional<std::string>& someOptional) noexcept override {
      _swiftPart.setSomeOptional(someOptional);
    }
    inline Person getPerson() noexcept override {
      auto result = _swiftPart.getPerson();
      return result;
    }
    inline void setPerson(const Person& person) noexcept override {
      _swiftPart.setPerson(person);
    }

  public:
    // Methods
    inline void simpleFunc() override {
      _swiftPart.simpleFunc();
    }
    inline double addNumbers(double a, double b) override {
      auto value = _swiftPart.addNumbers(std::forward<decltype(a)>(a), std::forward<decltype(b)>(b));
      return value;
    }
    inline std::string addStrings(const std::string& a, const std::string& b) override {
      auto value = _swiftPart.addStrings(a, b);
      return value;
    }
    inline void multipleArguments(double num, const std::string& str, bool boo) override {
      _swiftPart.multipleArguments(std::forward<decltype(num)>(num), str, std::forward<decltype(boo)>(boo));
    }
    inline std::vector<double> getNumbers() override {
      auto value = _swiftPart.getNumbers();
      return value;
    }
    inline std::vector<std::string> getStrings() override {
      auto value = _swiftPart.getStrings();
      return value;
    }
    inline void callCallback(const std::function<void()>& callback) override {
      _swiftPart.callCallback(callback);
    }

  private:
    NitroImage::HybridSwiftKotlinTestObjectSpecCxx _swiftPart;
  };

} // namespace margelo::nitro::image
