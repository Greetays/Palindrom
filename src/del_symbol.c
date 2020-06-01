#include <stdio.h>
#include "palindrom.h"
#include <locale.h>
#include <stdlib.h>

void del_symbol(char *text, int count)
{
  setlocale(LC_ALL, "Rus"); //подключаем русский язык
  for (int i = 0; i != count; i++){
    if (text[i] >31 && text[i] < 192){ //проверка на лишние символы
      for (int j = i; text[j] >31 && text[j] < 192; j++){
        text[j] = text[j + 1]; //избавление от символов
      }
    }
  }
  for (int i = 0; i != count; i++){
    if (text[i] >31 && text[i] < 192){
      del_symbol(text, count); //если символы всё ещё есть, вызываем функцию снова
    }
  }
}
