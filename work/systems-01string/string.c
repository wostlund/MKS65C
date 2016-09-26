#include <stdio.h>
#include <stdlib.h>

int stringcmp(char s[], char k[]){
  int i;
  if(!(length(s) == length(k))){
    return 0;
  }
  for (i = 0; i<length(k); i++){
    if(s[i] != k[i]){
      return 0;
    }
  }
  return 1;
}

int length(char s[]){
  int i = 0;
  for(; i < 100; i++){
    if(s[i] == 0){
      return i;
    }
  }
  return i;
}

int main(){
  printf("%d\n", stringcmp("harry", "mike"));
  printf("%d\n", stringcmp("mikesadfgs", "mikedsadfgsa"));
  printf("%d\n", stringcmp("", "mike"));
  printf("%d\n", stringcmp("egwryuih", "rfhuew"));
  printf("%d\n", stringcmp("harry", "harry"));
  printf("%d\n", stringcmp("", ""));
  printf("%d\n", stringcmp("fred", "fred"));
}
