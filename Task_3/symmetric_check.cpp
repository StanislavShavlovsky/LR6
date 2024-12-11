#include "symmetric_check.h"
#include <cwctype> // Для std::towlower

bool is_symmetric(const std::wstring &str) {
    int left = 0;                 // Начало строки
    int right = str.size() - 1;   // Конец строки

    // Сравниваем символы с обеих сторон, игнорируя пробелы и регистр
    while (left < right) {
        while (left < right && std::iswspace(str[left])) left++; // Пропускаем пробелы
        while (left < right && std::iswspace(str[right])) right--; // Пропускаем пробелы

        if (std::towlower(str[left]) != std::towlower(str[right])) {
            return false;          // Если символы не равны, строка не симметрична
        }
        left++;
        right--;
    }
    return true;                   // Если все символы совпадают, строка симметрична
}
