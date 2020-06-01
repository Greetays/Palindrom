#include "palindrom.h"
#include <stdio.h>
#include <locale.h>

void search_pal (char *text, int size){
  setlocale(LC_ALL, "Rus"); //подключаем русский язык
  char prop[size];
  int i = 0, count = 0;

  for (i = 0; text[i] != '\0'; i++){
    if (text[i] != '.'){
      prop[count] = text[i];
      count++;
    }
    else{
      count++;
      prop[count] = '\0';
      del_symbol(prop, count);
      puts(prop);
      count = 0;
    }
  }
}
