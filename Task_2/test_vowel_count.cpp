#include "vowel_count.h"
#include <gtest/gtest.h>

// Тесты для функции count_letters
TEST(CountLettersTest, BasicRussianText) {
    const char text[] = "Hello";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 2);
    EXPECT_EQ(consonant_count, 3);
}

TEST(CountLettersTest, BasicEnglishText) {
    const char text[] = "Hello, how are you?";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 8);
    EXPECT_EQ(consonant_count, 6);
}

TEST(CountLettersTest, MixedText) {
    const char text[] = "Hellos";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 2);
    EXPECT_EQ(consonant_count, 4);
}

TEST(CountLettersTest, OnlyVowels) {
    const char text[] = "bbbbb";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 0);
    EXPECT_EQ(consonant_count, 5);
}

TEST(CountLettersTest, OnlyConsonants) {
    const char text[] = "aaaa";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 4);
    EXPECT_EQ(consonant_count, 0);
}

TEST(CountLettersTest, EmptyText) {
    const char text[] = "";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 0);
    EXPECT_EQ(consonant_count, 0);
}

TEST(CountLettersTest, TextWithNumbersAndSymbols) {
    const char text[] = "kok";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 1);
    EXPECT_EQ(consonant_count, 2);
}

TEST(CountLettersTest, LongText) {
    const char text[] = "Hello my name is Stas";
    int vowel_count = 0;
    int consonant_count = 0;
    count_letters(text, vowel_count, consonant_count);
    EXPECT_EQ(vowel_count, 7);
    EXPECT_EQ(consonant_count, 10);
}

// Функция main для запуска тестов
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
