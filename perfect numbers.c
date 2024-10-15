#include <stdio.h>

int main()
{
int fact=1;
int  sum=0;
int n;

printf("Enter a number: ");
scanf("%d",&n);

if (n>0){
  for(float i = n/2; i >= fact; fact++){
    if (n % fact == 0){
    sum = sum + fact;}
    }
      if (sum==n)
      printf("Perfect Number ");
      else 
      printf("Not Perfect Number ");
  
     
  }
return 0;
}