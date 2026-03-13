#include "lib_fun.h"
#include <stdarg.h>
#include <stdio.h>

static void print_int(int value)
{
    unsigned int number = 0;
    if(value < 0)
    {
        putchar('-');
        number =  -value;
    }
    else
    {
        number = value;
    }

    if(value/10 > 0) print_int(value/10);

    putchar((number%10) + '0');
}

static void print_str(char* start)
{
    while(*start)
    {
        putchar(*start++);
    }
}

void mini_printf(const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    while(*fmt)
    {
        if(*fmt == '%')
        {
            fmt++;
            switch (*fmt)
            {
                case 'd':
                {
                    int value = va_arg(args,int);
                    print_int(value);
                    break;
                }
                case 'c':
                {
                    char value = (char)va_arg(args,int);
                    putchar(value);
                    break;
                }
                case 's':
                {
                    char *value = va_arg(args,char*);
                    print_str(value);
                    break;
                }
            }
        }
        else
        {
            putchar(*fmt);
        }
        fmt++;
    }
    va_end(args);
}