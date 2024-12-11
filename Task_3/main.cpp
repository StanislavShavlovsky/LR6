#include <iostream>
#include <string>
#include <locale>
#include <limits>
#include "symmetric_check.h"

void print_author_info() {
    std::wcout << L"Выполнил: Шавловский Станислав\n";
    std::wcout << L"Группа: 453502\n";
    std::wcout << L"Номер задания: 3\n";
    std::wcout << L"Вариант: 9\n";
    std::wcout << L"Проверить, является строка симметричной или нет. \n";
    std::wcout << L"Вывести на экран саму строку и результат её обработки.\n \n";
}

void show_menu() {
    std::wcout << L"Выберите действие:\n";
    std::wcout << L"1. Ввести массив строк\n";
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
            std::wcin.clear(); // Сброс состояния потока
            std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            continue;
        }
        
        std::wcin.ignore(); 

        if (choice == 1) {
            int size; 
            std::wcout << L"Введите количество строк: ";
            std::wcin >> size;
            std::wcin.ignore();

            std::wstring* strings = new std::wstring[size]; // Динамический массив строк
            std::wcout << L"Введите " << size << L" строк:\n";
            for (int i = 0; i < size; i++) {
                std::getline(std::wcin, strings[i]);
            }

            for (int i = 0; i < size; i++) {
                std::wcout << L"Строка: \"" << strings[i] << L"\" - ";
                if (is_symmetric(strings[i])) {
                    std::wcout << L"симметрична." << std::endl;
                } else {
                    std::wcout << L"не симметрична." << std::endl;
                }
            }

            delete[] strings; 
        } else if (choice == 2) {
            std::wcout << L"Выход из программы.\n";
            break;
        } else {
            std::wcout << L"Неверный ввод, попробуйте еще раз.\n";
        }
    }

    return 0;
}

