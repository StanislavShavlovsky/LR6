#include "vowel_count.h"
#include <gtest/gtest.h>

// Основные тесты
TEST(VowelCount, BasicTest1) {
    std::wstring text = L"hello";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 2);
    EXPECT_EQ(consonants, 3);
}

TEST(VowelCount, BasicTest2) {
    std::wstring text = L"world";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 1);
    EXPECT_EQ(consonants, 4);
}

// Тесты для проверки учета регистра
TEST(VowelCount, CaseInsensitiveTest1) {
    std::wstring text = L"HeLLo";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 2);
    EXPECT_EQ(consonants, 3);
}

TEST(VowelCount, CaseInsensitiveTest2) {
    std::wstring text = L"WorLD";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 1);
    EXPECT_EQ(consonants, 4);
}

// Тесты с пробелами
TEST(VowelCount, WhitespacesTest1) {
    std::wstring text = L"h e l l o";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 2);
    EXPECT_EQ(consonants, 3);
}

TEST(VowelCount, WhitespacesTest2) {
    std::wstring text = L"w o r l d";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 1);
    EXPECT_EQ(consonants, 4);
}

// Тесты для русских строк
TEST(VowelCount, RussianTest1) {
    std::wstring text = L"lol";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 1);
    EXPECT_EQ(consonants, 2);
}

TEST(VowelCount, RussianTest2) {
    std::wstring text = L"kek";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 1);
    EXPECT_EQ(consonants, 2);
}

// Краевые случаи
TEST(VowelCount, EdgeCaseEmptyString) {
    std::wstring text = L"";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 0);
    EXPECT_EQ(consonants, 0);
}

TEST(VowelCount, EdgeCaseOnlyVowels) {
    std::wstring text = L"aeiouAEIOU";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 10);
    EXPECT_EQ(consonants, 0);
}

// Тест для строки, содержащей только согласные
TEST(VowelCount, OnlyConsonants) {
    std::wstring text = L"bcdfgh";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 0);
    EXPECT_EQ(consonants, 6);
}

// Тест для пустой строки с пробелами
TEST(VowelCount, EmptyStringWithSpaces) {
    std::wstring text = L"    ";
    int vowels = 0, consonants = 0;
    count_letters(text, vowels, consonants);
    EXPECT_EQ(vowels, 0);
    EXPECT_EQ(consonants, 0);
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
