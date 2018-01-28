//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief Architecture unittests.
 */

#include <pycpp/preprocessor/architecture.h>
#include <gtest/gtest.h>

// TESTS
// -----


TEST(architecture, system_architecture)
{
#ifndef PYCPP_SYSTEM_ARCHITECTURE
#   error "System architecture not detected."
#endif
}
