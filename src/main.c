#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define STR 100

int main(int argc, char *argv[])
{
    char text[STR]; //создаём массив символов
    setlocale (LC_ALL, "Rus"); //подключаем русский язык
    FILE *text_file; //принимаем указатель на файл
    text_file = fopen (argv[1], "r"); //открываем файл для чтения
    if(text_file != NULL){ //идёт проверка на NULL
      while (fgets (text, STR, text_file)){ // получаем данные из файла
        fprintf(stdout, "%s\n", text); //выводим данные в командную строку
      }
    }
  //  fclose(argv[1]);//закрываем файл
return 0;
}
