#pragma once
#include <cstddef> // Добавляем это включение для использования size_t
#include <string>

const int MAX_LENGTH = 81;
const int MAX_NUMBERS = 80;

void read_input(char* buffer, std::size_t size);
int process_numbers(const char* input, char numbers[][MAX_LENGTH]);
void bubble_sort(char numbers[][MAX_LENGTH], int count);
void print_numbers(const char numbers[][MAX_LENGTH], int count);

