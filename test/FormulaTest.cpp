#include "gtest/gtest.h"
#include "Formula.h"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Formula::bla (0),  1);
    EXPECT_EQ (Formula::bla (10), 21);
    EXPECT_EQ (Formula::bla (50), 101);
}
