#include "numbers.h"
#include <gtest/gtest.h>
#include <sstream>

// Тесты для функции read_input
TEST(ReadInputTest, BasicInput) {
    char buffer[MAX_LENGTH];
    std::istringstream input("1.1 2.2 3.3\n");
    std::cin.rdbuf(input.rdbuf());
    ASSERT_NO_THROW(read_input(buffer, MAX_LENGTH));
    EXPECT_STREQ(buffer, "1.1 2.2 3.3\n");
}

TEST(ReadInputTest, EmptyInput) {
    char buffer[MAX_LENGTH];
    std::istringstream input("\n");
    std::cin.rdbuf(input.rdbuf());
    ASSERT_NO_THROW(read_input(buffer, MAX_LENGTH));
    EXPECT_STREQ(buffer, "\n");
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
    const char *input = "1.1 2.2 3.3";
    double numbers[MAX_NUMBERS];
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 3);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
    EXPECT_DOUBLE_EQ(numbers[2], 3.3);
}

TEST(ProcessNumbersTest, InvalidInput) {
    const char *input = "1.1 abc 2.2";
    double numbers[MAX_NUMBERS];
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 2);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
}

TEST(ProcessNumbersTest, OnlySpacesInput) {
    const char *input = "   ";
    double numbers[MAX_NUMBERS];
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 0);
}

TEST(ProcessNumbersTest, MixedValidInvalidInput) {
    const char *input = "1.1 abc 2.2 def 3.3";
    double numbers[MAX_NUMBERS];
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 3);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
    EXPECT_DOUBLE_EQ(numbers[2], 3.3);
}

// Тесты для функции bubble_sort
TEST(BubbleSortTest, BasicSort) {
    double numbers[] = {3.3, 1.1, 2.2};
    bubble_sort(numbers, 3);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
    EXPECT_DOUBLE_EQ(numbers[2], 3.3);
}

TEST(BubbleSortTest, AlreadySorted) {
    double numbers[] = {1.1, 2.2, 3.3};
    bubble_sort(numbers, 3);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
    EXPECT_DOUBLE_EQ(numbers[2], 3.3);
}

TEST(BubbleSortTest, ReverseSorted) {
    double numbers[] = {3.3, 2.2, 1.1};
    bubble_sort(numbers, 3);
    EXPECT_DOUBLE_EQ(numbers[0], 1.1);
    EXPECT_DOUBLE_EQ(numbers[1], 2.2);
    EXPECT_DOUBLE_EQ(numbers[2], 3.3);
}

// Тесты для функции print_numbers
TEST(PrintNumbersTest, BasicPrint) {
    double numbers[] = {1.1, 2.2, 3.3};
    std::ostringstream output;
    std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    print_numbers(numbers, 3);
    std::cout.rdbuf(oldCoutStreamBuf);
    EXPECT_EQ(output.str(), "1.1 2.2 3.3 \n");
}

TEST(PrintNumbersTest, EmptyPrint) {
    double numbers[] = {};
    std::ostringstream output;
    std::streambuf *oldCoutStreamBuf = std::cout.rdbuf();
    std::cout.rdbuf(output.rdbuf());
    print_numbers(numbers, 0);
    std::cout.rdbuf(oldCoutStreamBuf);
    EXPECT_EQ(output.str(), "\n");
}

// Краевые случаи
TEST(EdgeCasesTest, EmptyInput) {
    const char *input = "";
    double numbers[MAX_NUMBERS];
    int count = process_numbers(input, numbers);
    EXPECT_EQ(count, 0);
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
