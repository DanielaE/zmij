// A double-to-string conversion algorithm based on Schubfach.
// Copyright (c) 2025 - present, Victor Zverovich
// Distributed under the MIT license (see LICENSE) or alternatively
// the Boost Software License, Version 1.0.

#ifndef ZMIJ_H_INCLUDED
#define ZMIJ_H_INCLUDED

namespace zmij {

constexpr inline int buffer_size = 25;

/// Writes the shortest correctly rounded decimal representation of `value` to
/// `buffer`. `buffer` should point to a buffer of size `buffer_size` or larger.
void dtoa(double value, char* buffer) noexcept;

}  // namespace zmij

#endif
