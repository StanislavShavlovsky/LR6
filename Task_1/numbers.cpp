#include "numbers.h"
#include <iostream>
#include <cstdlib> 

// Функция для считывания строки
void read_input(char* buffer, std::size_t size) {
    int i = 0;
    char ch;
    while (i < size - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        buffer[i++] = ch;
    }
    buffer[i] = '\0';
}

// Функция для обработки строки и получения отсортированных чисел
int process_numbers(const char* input, char numbers[][MAX_LENGTH]) {
    int count = 0;
    char token[MAX_LENGTH] = {0};
    int j = 0;
    bool is_token = false;

    for (int i = 0; input[i] != '\0' && count < MAX_NUMBERS; ++i) {
        if (input[i] != ' ' && input[i] != '\n') {
            token[j++] = input[i];
            is_token = true;
        } else if (is_token) {
            token[j] = '\0';
            for (int k = 0; k < MAX_LENGTH; ++k) {
                numbers[count][k] = token[k];
                if (token[k] == '\0') break;
            }
            j = 0;
            count++;
            is_token = false;
        }
    }

    if (is_token) {
        token[j] = '\0';
        for (int k = 0; k < MAX_LENGTH; ++k) {
            numbers[count][k] = token[k];
            if (token[k] == '\0') break;
        }
        count++;
    }

    return count;
}

// Функция для сортировки чисел (сортировка пузырьком)
void bubble_sort(char numbers[][MAX_LENGTH], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            double num1 = std::atof(numbers[j]);
            double num2 = std::atof(numbers[j + 1]);
            if (num1 > num2) {
                char temp[MAX_LENGTH] = {0};
                for (int k = 0; k < MAX_LENGTH; ++k) {
                    temp[k] = numbers[j][k];
                    numbers[j][k] = numbers[j + 1][k];
                    numbers[j + 1][k] = temp[k];
                    if (temp[k] == '\0') break;
                }
            }
        }
    }
}

// Функция для вывода чисел
void print_numbers(const char numbers[][MAX_LENGTH], int count) {
    for (int i = 0; i < count; ++i) {
        for (int j = 0; j < MAX_LENGTH; ++j) {
            if (numbers[i][j] == '\0') break;
            std::cout << numbers[i][j];
        }
        std::cout << " ";
    }
    std::cout << std::endl;
}
