///
/// ImageSpec.cpp
/// Wed Jul 17 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#include "ImageSpec.hpp"

void ImageSpec::loadHybridMethods() {
  registerHybridGetter("width", &ImageSpec::getWidth, this);
  registerHybridGetter("height", &ImageSpec::getHeight, this);
  registerHybridGetter("data", &ImageSpec::getData, this);
  registerHybridGetter("pixelFormat", &ImageSpec::getPixelFormat, this);
}