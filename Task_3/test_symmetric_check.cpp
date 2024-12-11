#include "symmetric_check.h"
#include <gtest/gtest.h>

// Основные тесты
TEST(SymmetricCheck, BasicTest1) {
    EXPECT_TRUE(is_symmetric(L"abba"));
}

TEST(SymmetricCheck, BasicTest2) {
    EXPECT_FALSE(is_symmetric(L"abcdef"));
}

// Тесты для проверки учета регистра
TEST(SymmetricCheck, CaseInsensitiveTest1) {
    EXPECT_TRUE(is_symmetric(L"AbaBa"));
}

TEST(SymmetricCheck, CaseInsensitiveTest2) {
    EXPECT_TRUE(is_symmetric(L"Level"));
}

// Тесты с пробелами
TEST(SymmetricCheck, WhitespacesTest1) {
    EXPECT_TRUE(is_symmetric(L"a b b a"));
}

TEST(SymmetricCheck, WhitespacesTest2) {
    EXPECT_TRUE(is_symmetric(L"A B C C B A"));
}

// Тесты для русских строк
TEST(SymmetricCheck, RussianTest1) {
    EXPECT_TRUE(is_symmetric(L"довод"));
}

TEST(SymmetricCheck, RussianTest2) {
    EXPECT_FALSE(is_symmetric(L"привет"));
}

// Краевые случаи
TEST(SymmetricCheck, EdgeCaseEmptyString) {
    EXPECT_TRUE(is_symmetric(L""));
}

TEST(SymmetricCheck, EdgeCaseSingleCharacter) {
    EXPECT_TRUE(is_symmetric(L"a"));
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
