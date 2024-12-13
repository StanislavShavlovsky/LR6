#include <iostream>
#include <locale>
#include <limits>
#include "symmetric_check.h"

void print_author_info() {
    std::cout << "Выполнил: Шавловский Станислав\n";
    std::cout << "Группа: 453502\n";
    std::cout << "Номер задания: 3\n";
    std::cout << "Вариант: 9\n";
    std::cout << "Проверить, является строка симметричной или нет. \n";
    std::cout << "Вывести на экран саму строку и результат её обработки.\n \n";
}

void show_menu() {
    std::cout << "Выберите действие:\n";
    std::cout << "1. Ввести массив строк\n";
    std::cout << "2. Выход\n";
}

void read_text(char text[], int size) {
    int i = 0;
    char ch;
    while (i < size - 1 && (ch = getchar()) != '\n' && ch != EOF) {
        text[i++] = ch;
    }
    text[i] = '\0';
}

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    print_author_info();

    while (true) {
        show_menu();
        char choice_input[10] = {0};
        std::cout << "Введите номер действия: ";

        std::cin.getline(choice_input, 10);
        if (!is_valid_choice(choice_input)) {
            std::cerr << "Ошибка ввода. Пожалуйста, введите число 1 или 2." << std::endl;
            continue;
        }

        int choice = choice_input[0] - '0';

        if (choice == 1) {
            int size;
            std::cout << "Введите количество строк: ";
            while (!(std::cin >> size) || size <= 0) {
                std::cerr << "Ошибка ввода. Пожалуйста, введите положительное число." << std::endl;
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            char strings[size][MAX_TEXT_LENGTH];
            std::cout << "Введите " << size << " строк:\n";
            for (int i = 0; i < size; i++) {
                read_text(strings[i], MAX_TEXT_LENGTH);
            }

            for (int i = 0; i < size; i++) {
                std::cout << "Строка: \"" << strings[i] << "\" - ";
                if (is_symmetric(strings[i])) {
                    std::cout << "симметрична." << std::endl;
                } else {
                    std::cout << "не симметрична." << std::endl;
                }
            }
        } else if (choice == 2) {
            std::cout << "Выход из программы.\n";
            break;
        } else {
            std::cerr << "Неверный ввод, попробуйте еще раз.\n";
        }
    }

    return 0;
}
