#include "c-echo.h"

#include "gtest/gtest.h"
/***test1
TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}
***/


/***test2
TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

***/


/*** test3
  TEST(EchoTest, Math){
          char * test_val[4];
                  test_val[0] = "./c-echo"
                          test_val[1] = "123";
                                  test_val[2] = "456";
                                          test_val[3] = "789";
                                                  EXPECT_EQ("123 456 789",echo(4,test_val));
                                                  }
 
                                                  ***/

/*** test4
TEST(EchoTest, Add){
    char * test_val[6];
    test_val[0] = "./c-echo"
    test_val[1] = "1";   test_val[2] = "+";                   test_val[3] = "4";
       test_val[4] = "=";
          test_val[5] = 5;                                                                 EXPECT_EQ("1 + 4 = 5",echo(6,test_val));
                                           ***/




//test5
TEST(EchoTest, Acculate){
	char * test_val[3];
	test_val[0] = "./c-echo";
	test_val[1] = "123";
	test_val[2] = "456";
	EXPECT_EQ("123 456",echo(3,test_val));
}
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
