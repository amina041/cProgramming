#include <stdio.h>
int main(){
float P,T,R,SI;
printf("Enter P,T,R: ");
scanf("%f %f %f",&P,&T,&R);
SI = P*T*R/100;
printf("Simple interest is: %f",SI);
return 0;
}
