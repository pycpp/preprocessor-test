//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief stdint width unittests.
 */

#include <pycpp/preprocessor/stdint.h>
#include <gtest/gtest.h>

// TESTS
// -----

TEST(stdint, int8_width)
{
#ifndef INT8_WIDTH
#   error "INT8_WIDTH."
#endif
}

TEST(stdint, int16_width)
{
#ifndef INT16_WIDTH
#   error "INT16_WIDTH."
#endif
}

TEST(stdint, int32_width)
{
#ifndef INT32_WIDTH
#   error "INT32_WIDTH."
#endif
}

TEST(stdint, int64_width)
{
#ifndef INT64_WIDTH
#   error "INT64_WIDTH."
#endif
}

TEST(stdint, uint8_width)
{
#ifndef UINT8_WIDTH
#   error "UINT8_WIDTH."
#endif
}

TEST(stdint, uint16_width)
{
#ifndef UINT16_WIDTH
#   error "UINT16_WIDTH."
#endif
}

TEST(stdint, uint32_width)
{
#ifndef UINT32_WIDTH
#   error "UINT32_WIDTH."
#endif
}

TEST(stdint, uint64_width)
{
#ifndef UINT64_WIDTH
#   error "UINT64_WIDTH."
#endif
}

TEST(stdint, int_fast8_width)
{
#ifndef INT_FAST8_WIDTH
#   error "INT_FAST8_WIDTH."
#endif
}

TEST(stdint, int_fast16_width)
{
#ifndef INT_FAST16_WIDTH
#   error "INT_FAST16_WIDTH."
#endif
}

TEST(stdint, int_fast32_width)
{
#ifndef INT_FAST32_WIDTH
#   error "INT_FAST32_WIDTH."
#endif
}

TEST(stdint, int_fast64_width)
{
#ifndef INT_FAST64_WIDTH
#   error "INT_FAST64_WIDTH."
#endif
}

TEST(stdint, int_least8_width)
{
#ifndef INT_LEAST8_WIDTH
#   error "INT_LEAST8_WIDTH."
#endif
}

TEST(stdint, int_least16_width)
{
#ifndef INT_LEAST16_WIDTH
#   error "INT_LEAST16_WIDTH."
#endif
}

TEST(stdint, int_least32_width)
{
#ifndef INT_LEAST32_WIDTH
#   error "INT_LEAST32_WIDTH."
#endif
}

TEST(stdint, int_least64_width)
{
#ifndef INT_LEAST64_WIDTH
#   error "INT_LEAST64_WIDTH."
#endif
}

TEST(stdint, uint_fast8_width)
{
#ifndef UINT_FAST8_WIDTH
#   error "UINT_FAST8_WIDTH."
#endif
}

TEST(stdint, uint_fast16_width)
{
#ifndef UINT_FAST16_WIDTH
#   error "UINT_FAST16_WIDTH."
#endif
}

TEST(stdint, uint_fast32_width)
{
#ifndef UINT_FAST32_WIDTH
#   error "UINT_FAST32_WIDTH."
#endif
}

TEST(stdint, uint_fast64_width)
{
#ifndef UINT_FAST64_WIDTH
#   error "UINT_FAST64_WIDTH."
#endif
}

TEST(stdint, uint_least8_width)
{
#ifndef UINT_LEAST8_WIDTH
#   error "UINT_LEAST8_WIDTH."
#endif
}

TEST(stdint, uint_least16_width)
{
#ifndef UINT_LEAST16_WIDTH
#   error "UINT_LEAST16_WIDTH."
#endif
}

TEST(stdint, uint_least32_width)
{
#ifndef UINT_LEAST32_WIDTH
#   error "UINT_LEAST32_WIDTH."
#endif
}

TEST(stdint, uint_least64_width)
{
#ifndef UINT_LEAST64_WIDTH
#   error "UINT_LEAST64_WIDTH."
#endif
}

TEST(stdint, intptr_width)
{
#ifndef INTPTR_WIDTH
#   error "INTPTR_WIDTH."
#endif
}

TEST(stdint, intmax_width)
{
#ifndef INTMAX_WIDTH
#   error "INTMAX_WIDTH."
#endif
}

TEST(stdint, uintptr_width)
{
#ifndef UINTPTR_WIDTH
#   error "UINTPTR_WIDTH."
#endif
}

TEST(stdint, uintmax_width)
{
#ifndef UINTMAX_WIDTH
#   error "UINTMAX_WIDTH."
#endif
}
