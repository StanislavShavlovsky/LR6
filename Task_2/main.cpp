#include <iostream>
#include <locale>
#include "vowel_count.h"

void print_author_info() {
    std::cout << "Выполнил: Шавловский Станислав\n";
    std::cout << "Группа: 453502\n";
    std::cout << "Номер задания: 2\n";
    std::cout << "Вариант: 9\n";
    std::cout << "Найти, каких букв в тексте больше – гласных или согласных.\n";
}

void show_menu() {
    std::cout << "Выберите действие:\n";
    std::cout << "1. Ввести текст\n";
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
            char text[MAX_TEXT_LENGTH];
            std::cout << "Введите текст: ";
            read_text(text, MAX_TEXT_LENGTH);

            int vowel_count = 0;
            int consonant_count = 0;

            count_letters(text, vowel_count, consonant_count);

            std::cout << "Гласных букв: " << vowel_count << std::endl;
            std::cout << "Согласных букв: " << consonant_count << std::endl;

            if (vowel_count > consonant_count) {
                std::cout << "В тексте больше гласных букв." << std::endl;
            } else if (consonant_count > vowel_count) {
                std::cout << "В тексте больше согласных букв." << std::endl;
            } else {
                std::cout << "Количество гласных и согласных букв одинаково." << std::endl;
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

