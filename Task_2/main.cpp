#include <iostream>
#include <string>
#include <locale>
#include <limits>
#include "vowel_count.h"

void print_author_info() {
    std::wcout << L"Выполнил: Шавловский Станислав\n";
    std::wcout << L"Группа: 453502\n";
    std::wcout << L"Номер задания: 2\n";
    std::wcout << L"Вариант: 9\n";
    std::wcout << L"Найти, каких букв в тексте больше – гласных или согласных.\n";
}

void show_menu() {
    std::wcout << L"Выберите действие:\n";
    std::wcout << L"1. Ввести текст\n";
    std::wcout << L"2. Выход\n";
}

int main() {
    std::setlocale(LC_ALL, "ru_RU.UTF-8");

    print_author_info(); 

    while (true) {
        show_menu(); 
        int choice;
        std::wcout << L"Введите номер действия: ";
        
        if (!(std::wcin >> choice)) { // Используем std::wcin для ввода чисел
            std::wcout << L"Ошибка ввода. Пожалуйста, введите число." << std::endl;
            std::wcin.clear(); 
            std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue; 
        }
        
        std::wcin.ignore();

        if (choice == 1) {
            std::wcout << L"Введите текст: ";
            std::wstring text;
            std::getline(std::wcin, text); // Чтение широких символов

            int vowel_count = 0;
            int consonant_count = 0;

            count_letters(text, vowel_count, consonant_count); // Подсчет гласных и согласных

            std::wcout << L"Гласных букв: " << vowel_count << std::endl;
            std::wcout << L"Согласных букв: " << consonant_count << std::endl;

            if (vowel_count > consonant_count) {
                std::wcout << L"В тексте больше гласных букв." << std::endl;
            } else if (consonant_count > vowel_count) {
                std::wcout << L"В тексте больше согласных букв." << std::endl;
            } else {
                std::wcout << L"Количество гласных и согласных букв одинаково." << std::endl;
            }
        } else if (choice == 2) {
            std::wcout << L"Выход из программы.\n";
            break;
        } else {
            std::wcout << L"Неверный ввод, попробуйте еще раз.\n";
        }
    }

    return 0;
}
