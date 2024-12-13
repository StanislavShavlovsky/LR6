#include "symmetric_check.h"
#include <iostream>
#include <cctype>

// Функция для проверки, является ли строка симметричной
bool is_symmetric(const char str[]) {
    int left = 0;
    int right = 0;

    while (str[right] != '\0') {
        right++;
    }
    right--;

    // Сравниваем символы с обеих сторон, игнорируя пробелы и регистр
    while (left < right) {
        while (left < right && (str[left] == ' ' || str[left] == '\t' || str[left] == '\n')) left++;
        while (left < right && (str[right] == ' ' || str[right] == '\t' || str[right] == '\n')) right--;

        char left_char[5] = {0};
        char right_char[5] = {0};

        // Копируем символы для дальнейшего сравнения
        if ((unsigned char)str[left] < 128) {
            left_char[0] = std::tolower(str[left]);
        } else if ((unsigned char)str[left] < 224) {
            left_char[0] = str[left];
            left_char[1] = str[left + 1];
        } else if ((unsigned char)str[left] < 240) {
            left_char[0] = str[left];
            left_char[1] = str[left + 1];
            left_char[2] = str[left + 2];
        } else {
            left_char[0] = str[left];
            left_char[1] = str[left + 1];
            left_char[2] = str[left + 2];
            left_char[3] = str[left + 3];
        }

        if ((unsigned char)str[right] < 128) {
            right_char[0] = std::tolower(str[right]);
        } else if ((unsigned char)str[right] < 224) {
            right_char[0] = str[right - 1];
            right_char[1] = str[right];
        } else if ((unsigned char)str[right] < 240) {
            right_char[0] = str[right - 2];
            right_char[1] = str[right - 1];
            right_char[2] = str[right];
        } else {
            right_char[0] = str[right - 3];
            right_char[1] = str[right - 2];
            right_char[2] = str[right - 1];
            right_char[3] = str[right];
        }

        // Сравниваем символы
        bool is_equal = true;
        for (int i = 0; i < 5; ++i) {
            if (left_char[i] != right_char[i]) {
                is_equal = false;
                break;
            }
        }

        if (!is_equal) {
            return false;
        }

        // Если символ занимает 1 байт (ASCII)
        if ((unsigned char)str[left] < 128) {
            left++;
        } else if ((unsigned char)str[left] < 224) {
            left += 2;
        } else if ((unsigned char)str[left] < 240) {
            left += 3;
        } else {
            left += 4;
        }

        // Если символ занимает 1 байт (ASCII)
        if ((unsigned char)str[right] < 128) {
            right--;
        } else if ((unsigned char)str[right] < 224) {
            right -= 2;
        } else if ((unsigned char)str[right] < 240) {
            right -= 3;
        } else {
            right -= 4;
        }
    }
    return true;
}

bool is_valid_choice(const char* choice_input) {
    if (choice_input[0] != '1' && choice_input[0] != '2') {
        return false;
    }
    for (int i = 1; choice_input[i] != '\0'; ++i) {
        if (!std::isspace(static_cast<unsigned char>(choice_input[i]))) {
            return false;
        }
    }
    return true;
}
