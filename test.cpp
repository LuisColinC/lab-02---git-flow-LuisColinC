#include "c-echo.h"
<<<<<<< HEAD
#include "c-count.h"
=======
>>>>>>> master

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
<<<<<<< HEAD
    char* test_val[3]; test_val[0] = "./c-echo-count"; test_val[1] = "hello"; test_val[2] = "world";
=======
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
>>>>>>> master
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
<<<<<<< HEAD
    char* test_val[1]; test_val[0] = "./c-echo-count";
    EXPECT_EQ("", echo(1, test_val));
}

TEST(CountTest, HelloWorld) {
    std::string test_str = "hello world";
    EXPECT_EQ(2, count(test_str));
}

TEST(CountTest, EmptyString) {
    std::string test_str = "";
    EXPECT_EQ(0, count(test_str));
}

TEST(CountTest, ManySpaces) {
    std::string test_str = "   this   string has     weird   spacing";
    EXPECT_EQ(5, count(test_str));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
=======
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
>>>>>>> master
}
