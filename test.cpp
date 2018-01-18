#include "gtest/gtest.h"
extern "C" {
  #include "func.h"
}

class fixtureName : public ::testing::Test {
protected:
  virtual void SetUp(){
  }
  virtual void TearDown(){
  }
};

TEST_F(fixtureName, testOk)
{
    EXPECT_EQ(10, some_func(0));
    EXPECT_EQ(11, some_func(1));
}

