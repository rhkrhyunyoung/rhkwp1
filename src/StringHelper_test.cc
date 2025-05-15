// StringHelper_test.cc
#include "StringHelper.h"
#include <gtest/gtest.h>

using namespace Utils::String;

TEST(StringHelperTest, EmptyString) {
    EXPECT_EQ(StringHelper::toUpperCase(""), "");
    EXPECT_EQ(StringHelper::toLowerCase(""), "");
    EXPECT_FALSE(StringHelper::contains("", "kiwi"));
}

TEST(StringHelperTest, NormalString) {
    EXPECT_EQ(StringHelper::toUpperCase("Hello"), "HELLO");
    EXPECT_EQ(StringHelper::toLowerCase("RHKRGUSDUD"), "rhkrgusdud");
    EXPECT_TRUE(StringHelper::contains("i like kiwi", "kiwi"));
}

TEST(StringHelperTest, SpecialCharacters) {
    EXPECT_EQ(StringHelper::toUpperCase("Hello!!333"), "HELLO!!333");
    EXPECT_EQ(StringHelper::toLowerCase("RHK3RGUSDUD~"), "rhk3rgusdud~");
}


