#include <iostream>
#include <stdexcept>
#include <limits>
#include "numbers.h"

void print_author_info()
{
    std::cout << "Выполнил: Шавловский Станислав\n";
    std::cout << "Группа: 453502\n";
    std::cout << "Номер задания: 1\n";
    std::cout << "Вариант: 9\n";
    std::cout << "Дана строка символов, состоящая из цифр, разделенных пробелами.\n";
    std::cout << "Вывести на экран числа этой строки в порядке возрастания их значений.\n \n";
}

void show_menu()
{
    std::cout << "Выберите действие:\n";
    std::cout << "1. Ввести строку чисел\n";
    std::cout << "2. Выход\n";
}

int main()
{
    char input[MAX_LENGTH];
    double numbers[MAX_NUMBERS]; 

    print_author_info();

    while (true)
    {
        show_menu();
        int choice;
        std::cout << "Введите номер действия: ";

        if (!(std::cin >> choice)) {
            std::cerr << "Ошибка ввода. Пожалуйста, введите число." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice == 1)
        {
            std::cout << "Введите строку чисел, разделенных пробелами: ";
            read_input(input, MAX_LENGTH);

            try
            {
                int count = process_numbers(input, numbers);
                if (count == 0)
                {
                    throw std::runtime_error("Не введено ни одно число.");
                }
                bubble_sort(numbers, count);
                std::cout << "Исходный текст: " << input << std::endl;
                std::cout << "Числа в порядке возрастания: ";
                print_numbers(numbers, count);
            }
            catch (const std::exception &e)
            {
                std::cerr << "Ошибка: " << e.what() << std::endl;
            }
        }
        else if (choice == 2)
        {
            std::cout << "Выход из программы.\n";
            break;
        }
        else
        {
            std::cerr << "Неверный ввод, попробуйте еще раз.\n";
        }
    }

    return 0;
}

