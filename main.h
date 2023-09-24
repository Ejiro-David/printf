#ifndef MAIN_H
#define MAIN_H

#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _utoa(char *str, unsigned int num, int base);
int _itoa(char *str, int num);
int format_u(char *buffer, int buffer_index, va_list list_of_args);
int format_c(char *buffer, int buffer_index, va_list list_of_args);
int format_s(char *buffer, int buffer_index, va_list list_of_args);
int format_d_i(char *buffer, int buffer_index, va_list list_of_args);
int format_b(char *buffer, int buffer_index, va_list list_of_args);
int format_o(char *buffer, int buffer_index, va_list list_of_args);
int format_x(char *buffer, int buffer_index, va_list list_of_args);
int format_X(char *buffer, int buffer_index, va_list list_of_args);
int format_p(char *buffer, int buffer_index, va_list list_of_args);
void handle_hash_flag(char *buffer, int *buffer_index, va_list list_of_args);
void handle_space_flag(char *buffer, int *buffer_index, va_list list_of_args);
void handle_plus_flag(char *buffer, int *buffer_index, va_list list_of_args);
void handle_minus_flag(char *buffer, int *buffer_index, va_list list_of_args);

#endif
