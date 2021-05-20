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
char *args[] = {"0", "5", "+", "2"};
Base *op = test.parse(args,4);
EXPECT_DOUBLE_EQ(op->evaluate(),7);


}//end test 

TEST(FactoryTest, Sub){

factory test;
char *args[] = {"0", "5", "-", "4"};
Base *op = test.parse(args,4);
EXPECT_DOUBLE_EQ(op->evaluate(),1);


}//end test

TEST(FactoryTest, Mult){

factory test;
char *args[] = {"0", "5", "*", "5"};
Base *op = test.parse(args,4);
EXPECT_DOUBLE_EQ(op->evaluate(),25);


}//end test

TEST(FactoryTest, Div){

factory test;
char *args[] = {"0", "5", "/", "5"};
Base *op = test.parse(args,4);
EXPECT_DOUBLE_EQ(op->evaluate(),1);


}//end test

TEST(FactoryTest, Pow){

factory test;
char *args[] = {"0", "5", "**", "2"};
Base *op = test.parse(args,4);
EXPECT_DOUBLE_EQ(op->evaluate(),25);


}//end test

TEST(FactoryTest, Comp1){

factory test;
char *args[] = {"0", "5", "+", "5", "-", "3", "*", "3"};
Base *op = test.parse(args,8);
EXPECT_DOUBLE_EQ(op->evaluate(),21);


}//end test

TEST(FactoryTest, Comp2){

factory test;
char *args[] = {"0", "5", "+", "5", "*", "3", "/", "3"};
Base *op = test.parse(args,8);
EXPECT_DOUBLE_EQ(op->evaluate(),10);


}//end test

TEST(FactoryTest, Comp3){

factory test;
char *args[] = {"0", "5", "*", "5", "-", "20", "**", "2"};
Base *op = test.parse(args,8);
EXPECT_DOUBLE_EQ(op->evaluate(),25);


}//end test

TEST(FactoryTest, Comp4){

factory test;
char *args[] = {"0", "5", "**", "2", "**", "1", "-", "1"};
Base *op = test.parse(args,8);
EXPECT_DOUBLE_EQ(op->evaluate(),24);


}//end test

TEST(FactoryTest, Comp5){

factory test;
char *args[] = {"0", "5", "+", "5", "+", "3", "-", "4"};
Base *op = test.parse(args,8);
EXPECT_DOUBLE_EQ(op->evaluate(),9);


}//end test

TEST(FactoryTest, Error1){

factory test;
char *args[] = {"0", "5", "5", "2"};
Base *op = test.parse(args,4);
EXPECT_EQ(test.errorStg,"ERROR!");


}//end test

TEST(FactoryTest, Error2){

factory test;
char *args[] = {"0", "+", "**", "+"};
Base *op = test.parse(args,4);
EXPECT_EQ(test.errorStg,"ERROR!");



}//end test

TEST(FactoryTest, Error3){

factory test;
char *args[] = {"0", "N", "U", "T"};
Base *op = test.parse(args,4);
EXPECT_EQ(test.errorStg,"ERROR!");



}//end test









#endif
