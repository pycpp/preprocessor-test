//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief Parallel execution policy unittests.
 */

#include <pycpp/preprocessor/parallel.h>
#include <gtest/gtest.h>
#include <numeric>
#include <vector>

PYCPP_USING_NAMESPACE;

// TESTS
// -----


TEST(parallel, accumulate)
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto sum = std::accumulate(PARALLEL_EXECUTION v.begin(), v.end(), 0);
    EXPECT_EQ(sum, 15);
}
