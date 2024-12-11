#ifndef VOWEL_COUNT_H
#define VOWEL_COUNT_H

#include <string>

bool is_vowel(wchar_t ch);

void count_letters(const std::wstring &text, int &vowel_count, int &consonant_count);

#endif 
