#include "palindrom.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

void del_symbol(char* text, int count)
{
    setlocale(LC_ALL, "Russian"); //подключаем русский язык
    char text2[count];
    int i, j;
    for (i = j = 0; i != count; i++){
        if (text[i] != ' '){
          text2[j++] = text[i];
        }
    }
    text2[j] = '\0';
    puts(text2);
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
