#pragma once

// #define LOG(fmt, ...) printf(fmt, ##__VA_ARGS__)
// LOG("Hello, World!"); GNU Y Clang X

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wgnu-zero-variadic-macro-arguments"
#endif

/// Main TTS namespace
namespace tts {}

#include <tts/tools/stdfix.hpp>
#include <tts/engine/main.hpp>
#include <tts/test/case.hpp>
#include <tts/test/info.hpp>
#include <tts/test/basic.hpp>
#include <tts/test/generator.hpp>
#include <tts/test/relation.hpp>
#include <tts/test/types.hpp>
#include <tts/test/exceptions.hpp>
#include <tts/test/precision.hpp>
#include <tts/test/ranges.hpp>
#include <tts/test/sequence.hpp>
#include <tts/test/when.hpp>
#include <tts/tools/random.hpp>