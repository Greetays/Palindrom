#include "palindrom.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void del_symbol(char* text, int count)
{
    setlocale(LC_ALL, "Russian"); //подключаем русский язык
    for (int i = 0; i != count; i++) {
        if (text[i] > 31 && text[i] < 192) { //проверка на лишние символы
            for (int j = i; text[j] > 31 && text[j] < 192; j++) {
                text[j] = text[j + 1]; //избавление от символов
            }
        }
    }
    for (int i = 0; i != count; i++) {
        if (text[i] > 31 && text[i] < 192) {
            del_symbol(
                    text,
                    count); //если символы всё ещё есть, вызываем функцию снова
        }
    }
}
void breaking_up(char* text, int size)
{
    setlocale(LC_ALL, "Russian"); //подключаем русский язык
    char prop[size];
    int i = 0, count = 0;

    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] != '.') {
            prop[count] = text[i];
            count++;
        } else {
            count++;
            prop[count] = '\0';
            del_symbol(prop, count);
            search_pal(prop, count);
            //  puts(prop);
            count = 0;
        }
    }
}
