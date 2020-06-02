#include "palindrom.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#define CONST 100000

int main(int argc, char* argv[])
{
    int size = 0;
    setlocale(LC_ALL, "Russian"); //подключаем русский язык
    char* text = NULL; //создаём указатель на массив
    text = (char*)malloc(CONST * sizeof(int)); //выделяем память под константу
    FILE* text_file;
    text_file = fopen(argv[1], "r"); //открываем файл для чтения
    printf("\nИнструкция:\n1. Файл не должен превышать 12 Кб\n2. Все слова должны быть написаны в нижнем регистре\n3. После каждого предложения ставится точка");
    if (text_file != NULL) {         //идёт проверка на NULL
        while (fgets(text, CONST, text_file)) { // получаем данные из файла
        }
    } else {
        printf("\nОшибка: Аргумент не найден.\n ");
    }
    for (int i = 0; text[i] != '\0'; i++) { //подсчёт размера в строке
        size++;
    }
    text = realloc(text, size * sizeof(int)); //перераспределям память под размер текста
    printf("\n\nВаш текст:\n\n"); //вывод текста пользователя на экран
    for (int i = 0; i < size; i++) {
        printf("%c", text[i]);
    }
    printf("\nВ тексте были найдены следующие "
           "палиндромы:\n___________________\n\n");
    breaking_up(text, size); //вызываем функцию разделения текста на предложения
    printf("___________________\n");
    return 0;
}
