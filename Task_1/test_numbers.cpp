#include "numbers.h"
#include <gtest/gtest.h>
#include <sstream>
#include <cstring> 

// Тесты для функции read_input
TEST(ReadInputTest, BasicInput) {
    char buffer[MAX_LENGTH];
    std::istringstream input("1.1 2.2 3.3\n");
    std::cin.rdbuf(input.rdbuf());
    ASSERT_NO_THROW(read_input(buffer, MAX_LENGTH));
    EXPECT_STREQ(buffer, "1.1 2.2 3.3");
}

TEST(ReadInputTest, EmptyInput) {
    char buffer[MAX_LENGTH];
    std::istringstream input("\n");
    std::cin.rdbuf(input.rdbuf());
    ASSERT_NO_THROW(read_input(buffer, MAX_LENGTH));
    EXPECT_STREQ(buffer, "");
}

TEST(ReadInputTest, OverflowInput) {
    char buffer[MAX_LENGTH];
    std::string long_input(MAX_LENGTH + 10, 'A');
    std::istringstream input(long_input);
    std::cin.rdbuf(input.rdbuf());
    ASSERT_NO_THROW(read_input(buffer, MAX_LENGTH));
    EXPECT_EQ(strlen(buffer), MAX_LENGTH - 1);
}

// Тесты для функции process_numbers
TEST(ProcessNumbersTest, BasicInput) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = "1.1 2.2 3.3";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

TEST(ProcessNumbersTest, InvalidInput) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = "1.1 abc 2.2";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 2);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
}

TEST(ProcessNumbersTest, OnlySpacesInput) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = "   ";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 0);
}

TEST(ProcessNumbersTest, MixedValidInvalidInput) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = "1.1 abc 2.2 def 3.3";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

TEST(ProcessNumbersTest, LeadingTrailingSpaces) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = " 1.1 2.2 3.3 ";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

// Тесты для функции bubble_sort
TEST(BubbleSortTest, BasicSort) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"3.3", "1.1", "2.2"};
    bubble_sort(numbers, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

TEST(BubbleSortTest, AlreadySorted) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"1.1", "2.2", "3.3"};
    bubble_sort(numbers, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

TEST(BubbleSortTest, ReverseSorted) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"3.3", "2.2", "1.1"};
    bubble_sort(numbers, 3);
    EXPECT_STREQ(numbers[0], "1.1");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "3.3");
}

TEST(BubbleSortTest, AllEqual) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"2.2", "2.2", "2.2"};
    bubble_sort(numbers, 3);
    EXPECT_STREQ(numbers[0], "2.2");
    EXPECT_STREQ(numbers[1], "2.2");
    EXPECT_STREQ(numbers[2], "2.2");
}

// Тесты для функции print_numbers
TEST(PrintNumbersTest, BasicPrint) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"1.1", "2.2", "3.3"};
    std::ostringstream output;
    std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    print_numbers(numbers, 3);
    std::cout.rdbuf(oldCoutStreamBuf);
    EXPECT_EQ(output.str(), "1.1 2.2 3.3 \n");
}

TEST(PrintNumbersTest, EmptyPrint) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {};
    std::ostringstream output;
    std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    print_numbers(numbers, 0);
    std::cout.rdbuf(oldCoutStreamBuf);
    EXPECT_EQ(output.str(), "\n");
}

TEST(PrintNumbersTest, SingleNumberPrint) {
    char numbers[MAX_NUMBERS][MAX_LENGTH] = {"1.1"};
    std::ostringstream output;
    std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    print_numbers(numbers, 1);
    std::cout.rdbuf(oldCoutStreamBuf);
    EXPECT_EQ(output.str(), "1.1 \n");
}

// Краевые случаи
TEST(EdgeCasesTest, EmptyInput) {
    char numbers[MAX_NUMBERS][MAX_LENGTH];
    const char* input = "";
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 0);
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
