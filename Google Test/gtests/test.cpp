#include <iostream>
#include <string>
#include <vector>
#include <gtest/gtest.h>
#include "def1.h"
#include "def2.h"
#include "def3.h"
#include "def4.h"
#include "def5.h"
#include "def6.h"
#include "def7.h"
#include "def8.h"

TEST(Test1 , res) {
ASSERT_TRUE(def1(10, 11));
}

TEST(Test2 , res) {
ASSERT_FALSE(def2(0, 0, 4, 4, 3));
}

TEST(Test3 , res) {
std::string c = "x=x";
ASSERT_TRUE(def3(c) == "Infinite");
}

TEST(Test4 , res) {
std::vector<std::string> t = {"02:21", "23:21"};
ASSERT_TRUE(def4(t));
}

TEST(Test5 , res) {
ASSERT_TRUE(def5(1, 1, 3));
}

TEST(Test6 , res) {
std::string c = "-(3+(4+5))";
ASSERT_TRUE(def6(c) == -12);
}

TEST(Test7 , res) {
ASSERT_TRUE(def7(9));
}

TEST(Test8 , res) {
std::vector<std::vector<int>> bushes{{0,0}};
std::vector<std::vector<int>> res{{0 ,0}};
ASSERT_TRUE(def8(bushes) == res);
}