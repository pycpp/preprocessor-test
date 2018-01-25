//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief Cache detection unittests.
 */

#include <pycpp/preprocessor/cache.h>
#include <gtest/gtest.h>

// TESTS
// -----


TEST(cache, cacheline_size)
{
#ifndef CACHELINE_SIZE
#   error "Cache line size not detected."
#endif
}
