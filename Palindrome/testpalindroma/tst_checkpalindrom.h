#pragma once

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>
#include <palindrotest.h>

class TestPalindrom:public::testing::Test
{
public:
    palindrotest pl;

};
TEST_F(TestPalindrom, TestPalindrom)
{
    ASSERT_TRUE(pl("huh"));
}
TEST_F(TestPalindrom, TestSpace)
{
    ASSERT_EQ("huh",pl.removeSpaces("h uh"));
}
TEST_F(TestPalindrom, TestString)
{
    ASSERT_EQ(" ",pl.space(" sa s"));
}
TEST_F(TestPalindrom,TestLatter){
    EXPECT_TRUE(pl.Biglatter("asd"));
}
TEST_F(TestPalindrom,TestSimbols){
    EXPECT_TRUE(pl.Simbols("asad,"));
}
