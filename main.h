#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
int _printf(const char *format, ...);
int _utoa(char *str, unsigned int num, int base);
int _itoa(char *str, int num);

#endif
