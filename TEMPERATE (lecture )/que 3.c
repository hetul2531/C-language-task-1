#include <stdio.h>

int  main(){

  int a,b,c,r;
  
  

  printf("enter the number :");
  scanf("%d",&a);

c = a%10;
 
  while(a>=10)
    {
      a=a/10;
    }

  b=a;
  
  r = b+c;
  printf("result is : %d",r);


  return 0;
}