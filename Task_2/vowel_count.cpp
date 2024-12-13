#include "vowel_count.h"
#include <iostream>
#include <cctype>
#include <cstring>

// UTF-8 кодировки для русских гласных букв
const char* russian_vowels[] = {"а", "е", "ё", "и", "о", "у", "ы", "э", "ю", "я"};

bool is_utf8_start(unsigned char s) {
    return (s & 0xC0) == 0xC0;
}

bool is_vowel(const char* ch) {
    // Приводим символ к нижнему регистру
    char lower_ch[5] = {0};
    if ((unsigned char)ch[0] < 128) {
        lower_ch[0] = std::tolower(static_cast<unsigned char>(ch[0]));
    } else {
        for (int i = 0; i < 4 && ch[i] != '\0'; ++i) {
            lower_ch[i] = ch[i];
        }
    }

    // Проверяем, является ли символ гласной буквой
    for (int i = 0; i < 10; ++i) {
        if (std::strncmp(lower_ch, russian_vowels[i], std::strlen(russian_vowels[i])) == 0) {
            return true;
        }
    }
    return lower_ch[0] == 'a' || lower_ch[0] == 'e' || lower_ch[0] == 'i' || lower_ch[0] == 'o' || 
           lower_ch[0] == 'u' || lower_ch[0] == 'y';
}

void count_letters(const char text[], int &vowel_count, int &consonant_count) {
    vowel_count = 0;
    consonant_count = 0;
    for (int i = 0; text[i] != '\0'; ++i) {
        char ch[5] = {0};
        if ((unsigned char)text[i] < 128) {
            ch[0] = text[i];
        } else if ((unsigned char)text[i] < 224) {
            ch[0] = text[i];
            ch[1] = text[i + 1];
            i++;
        } else if ((unsigned char)text[i] < 240) {
            ch[0] = text[i];
            ch[1] = text[i + 1];
            ch[2] = text[i + 2];
            i += 2;
        } else {
            ch[0] = text[i];
            ch[1] = text[i + 1];
            ch[2] = text[i + 2];
            ch[3] = text[i + 3];
            i += 3;
        }

        if (std::isalpha(static_cast<unsigned char>(ch[0]))) { // Проверяем, является ли символ буквой
            if (is_vowel(ch)) {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }
}

