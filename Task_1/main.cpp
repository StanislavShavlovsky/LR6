#include <iostream>
#include "numbers.h"

void print_author_info() {
    std::cout << "Выполнил: Шавловский Станислав\n";
    std::cout << "Группа: 453502\n";
    std::cout << "Номер задания: 1\n";
    std::cout << "Вариант: 9\n";
    std::cout << "Дана строка символов, состоящая из цифр, разделенных пробелами.\n";
    std::cout << "Вывести на экран числа этой строки в порядке возрастания их значений.\n \n";
}

void show_menu() {
    std::cout << "Выберите действие:\n";
    std::cout << "1. Ввести строку чисел\n";
    std::cout << "2. Выход\n";
}

bool is_valid_choice(int choice, const std::string& input) {
    if (choice == 1 || choice == 2) {
        for (char c : input) {
            if (!std::isspace(c)) {
                return false; // Найден недопустимый символ после номера действия
            }
        }
        return true; // Корректный ввод
    }
    return false; // Недопустимый выбор номера действия
}

int main() {
    char input[MAX_LENGTH];
    char numbers[MAX_NUMBERS][MAX_LENGTH];

    print_author_info();

    while (true) {
        show_menu();
        std::string choice_input;
        std::cout << "Введите номер действия: ";

        std::getline(std::cin, choice_input);
        if (choice_input.empty()) {
            std::cerr << "Ошибка ввода. Пожалуйста, введите число 1 или 2." << std::endl;
            continue;
        }

        int choice = choice_input[0] - '0';
        if (!is_valid_choice(choice, choice_input.substr(1))) {
            std::cerr << "Ошибка ввода. Пожалуйста, введите число 1 или 2." << std::endl;
            continue;
        }

        if (choice == 1) {
            std::cout << "Введите строку чисел, разделенных пробелами: ";
            read_input(input, MAX_LENGTH);

            int count = process_numbers(input, numbers);
            if (count == 0) {
                std::cerr << "Не введено ни одно число." << std::endl;
                continue;
            }
            bubble_sort(numbers, count);
            std::cout << "Исходный текст: " << input << std::endl;
            std::cout << "Числа в порядке возрастания: ";
            print_numbers(numbers, count);
        } else if (choice == 2) {
            std::cout << "Выход из программы.\n";
            break;
        } else {
            std::cerr << "Неверный ввод, попробуйте еще раз.\n";
        }
    }

    return 0;
}
