#include "symmetric_check.h"
#include <gtest/gtest.h>

// Основные тесты
TEST(SymmetricCheck, BasicTest1) {
    EXPECT_TRUE(is_symmetric("abba"));
}

TEST(SymmetricCheck, BasicTest2) {
    EXPECT_FALSE(is_symmetric("abcdef"));
}

// Тесты для проверки учета регистра
TEST(SymmetricCheck, CaseInsensitiveTest1) {
    EXPECT_TRUE(is_symmetric("AbaBa"));
}

TEST(SymmetricCheck, CaseInsensitiveTest2) {
    EXPECT_TRUE(is_symmetric("Level"));
}

// Тесты с пробелами
TEST(SymmetricCheck, WhitespacesTest1) {
    EXPECT_TRUE(is_symmetric("a b b a"));
}

TEST(SymmetricCheck, WhitespacesTest2) {
    EXPECT_TRUE(is_symmetric("A B C C B A"));
}

// Тесты для русских строк
TEST(SymmetricCheck, RussianTest1) {
    EXPECT_TRUE(is_symmetric("довод"));
}

TEST(SymmetricCheck, RussianTest2) {
    EXPECT_FALSE(is_symmetric("привет"));
}

// Краевые случаи
TEST(SymmetricCheck, EdgeCaseEmptyString) {
    EXPECT_TRUE(is_symmetric(""));
}

TEST(SymmetricCheck, EdgeCaseSingleCharacter) {
    EXPECT_TRUE(is_symmetric("a"));
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

