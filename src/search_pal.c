#include "palindrom.h"
#include <stdio.h>
#include <locale.h>
#include <string.h>

int search_pal (unsigned char *prop, int count){
  setlocale(LC_ALL, "Russian"); //подключаем русский язык
  int i, j = 0;
  char prop2[count];
  count = count - 1;
  for (i = count; i >= 0; i--){
    prop2[j] = prop[i];
    j++;
  }
  puts(prop);
  puts(prop2);
  if(strcmp(prop,prop2)==0)
    puts("да\n");
  else
    puts("нет\n");
printf("\n");
}
