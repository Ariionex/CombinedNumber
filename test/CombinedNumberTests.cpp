#include <gtest/gtest.h>
#include "CombinedNumber.hpp"
#include <list>

struct CombinedNumberTests : public ::testing::Test
{
    CombinedNumber cn;
};

TEST_F(CombinedNumberTests, whenEmptyListIsGivenEmptyStringShouldBeReturned)
{
    auto result = cn.constructGreatestNumber({});
    ASSERT_EQ(result, "");
}

TEST_F(CombinedNumberTests, when1IsGivenString1IsReturned)
{
    auto result = cn.constructGreatestNumber({1});
    ASSERT_EQ(result, "1");
}

TEST_F(CombinedNumberTests, when1And1IsGiven11IsReturned)
{
    auto result = cn.constructGreatestNumber({1,1});
    ASSERT_EQ(result, "11");
}

TEST_F(CombinedNumberTests, when1And2IsGiven21IsReturned)
{
    auto result = cn.constructGreatestNumber({1,2});
    ASSERT_EQ(result, "21");
}

TEST_F(CombinedNumberTests, when11And2IsGiven211IsReturned)
{
    auto result = cn.constructGreatestNumber({11,2});
    ASSERT_EQ(result, "211");
}

TEST_F(CombinedNumberTests, when11And2And8IsGiven8211IsReturned)
{
    auto result = cn.constructGreatestNumber({11,2,8});
    ASSERT_EQ(result, "8211");
}

TEST_F(CombinedNumberTests, when50And2And1And9IsGiven95021IsReturned)
{
    auto result = cn.constructGreatestNumber({50, 2, 1, 9});
    ASSERT_EQ(result, "95021");
}

TEST_F(CombinedNumberTests, when5And50And56IsGiven56550IsReturned)
{
    auto result = cn.constructGreatestNumber({5, 50, 56});
    ASSERT_EQ(result, "56550");
}

TEST_F(CombinedNumberTests, when420And42And423IsGiven42423420IsReturned)
{
    auto result = cn.constructGreatestNumber({420, 42, 423});
    ASSERT_EQ(result, "42423420");
}

TEST_F(CombinedNumberTests, when5And51IsGiven551IsReturned)
{
    auto result = cn.constructGreatestNumber({5, 51});
    ASSERT_EQ(result, "551");
}
