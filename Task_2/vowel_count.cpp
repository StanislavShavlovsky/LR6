#include "vowel_count.h"
#include <cctype>
#include <locale>

bool is_vowel(wchar_t ch) {
    ch = std::towlower(ch); // Приводим к нижнему регистру
    return ch == L'a' || ch == L'e' || ch == L'i' || ch == L'o' || ch == L'u' ||
           ch == L'y' || ch == L'а' || ch == L'е' || ch == L'ё' || ch == L'и' ||
           ch == L'о' || ch == L'у' || ch == L'ы' || ch == L'э' || ch == L'ю' || ch == L'я';
}

void count_letters(const std::wstring &text, int &vowel_count, int &consonant_count) {
    vowel_count = 0;
    consonant_count = 0;
    for (wchar_t ch : text) {
        if (std::iswalpha(ch)) {  // Проверяем, является ли символ буквой
            if (is_vowel(ch)) {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }
}
