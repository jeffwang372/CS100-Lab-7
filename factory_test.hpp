#ifndef __factory_test_hpp__
#define __factory_test_hpp__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "pow.hpp"
#include "factory.hpp"


TEST(FactoryTest, Add){

factory test;
char *args[] = {"5", "+", "5"};
Base *op = test.parse(args,3);
EXPECT_DOUBLE_EQ(op->evaluate(),7);


}//end test 










#endif
