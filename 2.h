#ifndef COMP_2_H
#define COMP_2_H

#include <string>
#include "windows.h"
#include <iostream>
#include "2.h"

using namespace std;

// Функция для убирания лишних пробелов
string spaces(string str);

// Функция для проверки делимости и получения результата деления в виде строки
string isDivisibleBy(const string &number, long long divisor);

// Функция для определения, является ли число простым
bool primeNumbers(unsigned long long num);

void primeFactorization(string n);

#endif //COMP_2_H
