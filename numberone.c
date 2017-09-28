#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  
  //strcat append characters from a string
  //strcat (char *destination, *char string) 
  printf("---------strcat-------- \n");
  printf("inputs : strcat (char *destination,\n char *string)  \n\n");
  char strkitty[50];
  strcpy(strkitty, "hello");
  printf("strkitty with no added strings: [%s]\n",strkitty);
  strcat(strkitty, " my ");
  strcat(strkitty, "name ");
  strcat(strkitty, "is ");
  strcat(strkitty, ".\n");

  printf("strkitty with added strings [%s]\n\n", strkitty);

  //copies characters from a string
  printf("---------strncat-------- \n");
  printf("inputs : strncat (char *destination,\n char *string,\n size_t num_chars_appended)\n\n");
  char cat2[60];
  char cat3[60];
  strcpy(cat2, "hello");
  strcpy(cat3, "meow");
  printf("cat2 without added strings:[%s]\n",cat2);
  strncat(cat2,cat3,1);
  printf("cat2 with 1 added char:[%s]\n",cat2);
  strncat(cat2,cat3,2);
  printf("cat2 with 2 added char:[%s]\n",cat2);
  strncat(cat2,cat3,3);
  printf("cat2 with 3 added char:[%s]\n",cat2);
  strncat(cat2,cat3,4);
  printf("cat2 with 4 added char:[%s]\n",cat2);
  return 0;
  
}
