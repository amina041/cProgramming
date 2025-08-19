#include <stdio.h>
int main(){
char ch;
int i;
float flt;
printf("Enter a character value: ");
scanf("%c",&ch);
printf("Enter a int value: ");
scanf("%d",&i);
printf("Enter a floating value: ");
scanf("%f",&flt);
printf("given character value is: %c\n",ch);
printf("given floating point number is: %f\n",flt);
printf("given integer value is:%d\n",i);
printf("given %d and next %d and the sum is %d",i,i+1,i+i+1);
return 0;
}
