#include  <stdio.h>
int main(){

int a,b,c,result;

  printf ("Enter the value of a :");
  scanf ("%d",&a);

  printf ("Enter the value of b :");
  scanf ("%d",&b);

  printf ("Enter the value of c :");
  scanf("%d",&c);

  result = c<(a<b?a:b)?c:((a<b)?a:b);

  printf("the smallest number is : %d",result);

  return 0;
} 