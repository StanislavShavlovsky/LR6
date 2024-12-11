#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <cstdlib> 
#include <cstring> 

const int MAX_NUMBERS = 80; // Максимальное количество чисел
const int MAX_LENGTH = 81;  // Максимальная длина строки (80 символов + '\0')




void read_input(char* buffer, size_t size);


int process_numbers(const char* input, double numbers[]);


void bubble_sort(double numbers[], int count);


void print_numbers(double numbers[], int count);

#endif 