#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, AssignedTest1) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "first"; test_val[2] = "test";
    EXPECT_EQ("first tests4$@*", echo(3,test_val));
}

TEST(EchoTest, AssignedTest2) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "13400005";
    EXPECT_EQ("13400005", echo(3,test_val));
}

TEST(EchoTest, AssignedTest3) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "third"; test_val[2] = "test";
    EXPECT_EQ("second test", echo(3,test_val));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
