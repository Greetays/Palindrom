#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define STR 100

int main()
{
    char text[STR]; //создаём массив символов
    setlocale (LC_ALL, "Rus"); //подключаем русский язык
    FILE *text_file; //принимаем указатель на файл
    text_file = fopen ("C:\\Users\\Greetrays Kap\\Desktop\\Учёба\\2 Семестр\\Курсовая\\Palindrom\\bin\\text1.txt", "r"); //открываем файл для чтения
    while (fgets (text, STR, text_file)){
      fprintf(stdout, "%s\n", text);
    }
    fclose(text_file);//закрываем файл
return 0;
}
