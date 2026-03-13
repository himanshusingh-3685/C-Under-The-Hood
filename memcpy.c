#include "lib_fun.h"

void custom_memcpy(void *dest, const void *src, int size)
{
    char *d = (char*)dest;
    const char *s = (const char*)src;
    while(size--)
    {
        *d++ = *s++;
    }
    return;
}