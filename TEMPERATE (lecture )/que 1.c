#include <stdio.h>

int main(){

  char alphabet = 'a';

  do {

    printf("%c, ",alphabet);
    alphabet=alphabet+4;
    
  }while(alphabet <= 'z');

  return 0;  
}