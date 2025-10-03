#include "../include/header.h"
#include <gtest/gtest.h>

TEST(NODTest, Normal) {
    EXPECT_EQ(nod(48, 18), 6);
    EXPECT_EQ(nod(54, 24), 6);
    EXPECT_EQ(nod(101, 10), 1); 
}

TEST(NODTest, Minus) {
    EXPECT_EQ(nod(-48, -18), 6)
    EXPECT_EQ(nod(-54, 24), 6)
    EXPECT_EQ(nod(101, -10), 1)
}

TEST(NODTest, Null) {
    EXPECT_EQ(nod(0, 0), 0)
    EXPECT_EQ(nod(0, 5), 5)
    EXPECT_EQ(nod(5, 0), 5)
}
