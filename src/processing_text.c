#include "palindrom.h"
#include <stdio.h>
#include <stdlib.h>

void del_symbol(char* text, int count)
{
    int i, j;
    char text_nsymb[count]; //создаём массив
    for (i = j = 0; i < count; i++) { //удаляем из массива все лишние символы
        if (text[i] < 32) {
            text_nsymb[j++] = text[i]; //заполняем массив текстом без символов
        }
    }
    text_nsymb[j] = '\0';
    revers(text_nsymb, j); //вызываем функцию разворота строки
}

void revers(char* text, int size)
{
    char text_revers[size]; // создаём массив
    int i, j;
    for (i = 0, j = size - 1; i < size; i += 2,
        j -= 2) { //заполняем массив в обратную сторону для дальнейшей проверки
        text_revers[i] = text[j - 1];
        text_revers[i + 1] = text[j];
    }
    text_revers[size] = '\0';
    search_pal(text, text_revers, size); //вызываем функцию поиска палиндромов
}

void breaking_up(char* text, int size)
{
    char prop[size]; //создаём массив
    int i = 0, count = 0;

    for (i = 0; text[i] != '\0'; i++) { //отделяем предложение от строки
        if (text[i] != '.') {
            prop[count] = text[i]; //записываем его в массив
            count++;
        } else {
            prop[count] = '\0';
            del_symbol(prop, count); //вызывем фунцкцию обработки текста
            count = 0;
        }
    }
}
