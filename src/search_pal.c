#include "palindrom.h"
#include <stdio.h>

void search_pal(char* text1, char* text2, int size)
{
    if (comstr(text1, text2, size)
        == 1) //вызываем функцию проверки на палиндром
        puts(text1); //выводим палиндром
}

int comstr(char* text1, char* text2, int size)
{
    int count = 0;
    while (*text1 == *text2 && count < size) { //проверяется каждая буква
        text1++; text2++;
        count++; //пополняем счётчик
    }

    if (count == size) //если счётчик равен размеру, возвращаем 1
        return 1;
    else
        return 0;
}
