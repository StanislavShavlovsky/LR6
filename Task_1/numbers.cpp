#include "numbers.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

//считывание строки
void read_input(char *buffer, size_t size)
{
    if (fgets(buffer, size, stdin) == nullptr)
    {
        throw std::runtime_error("Ошибка ввода");
    }
}

// обработка строки и получение отсортированных чисел
int process_numbers(const char *input, double numbers[])
{
    int count = 0;
    char *input_copy = strdup(input);        // Создаем копию строки для разбиения
    char *token = strtok(input_copy, " \n"); // Разбиваем строку по пробелам и символам новой строки

    while (token != nullptr && count < MAX_NUMBERS)
    {
        char *endptr;
        double num = strtod(token, &endptr);

        if (*endptr == '\0' && endptr != token)
        {
            numbers[count++] = num; // Преобразуем строку в число
        }
        else
        {
            std::cerr << "Предупреждение: \"" << token << "\" не является числом и будет игнорировано." << std::endl;
        }

        token = strtok(nullptr, " \n"); // Продолжаем разбиение
    }
    free(input_copy);
    return count;
}

//сортировка чисел (сортировка пузырьком)
void bubble_sort(double numbers[], int count)
{
    for (int i = 0; i < count - 1; ++i)
    {
        for (int j = 0; j < count - i - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                std::swap(numbers[j], numbers[j + 1]);
            }
        }
    }
}

//вывод чисел
void print_numbers(double numbers[], int count)
{
    for (int i = 0; i < count; ++i)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}
