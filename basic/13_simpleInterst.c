#include <stdio.h>
int main(){
float P,T,R;
printf("Enter P,T,R: ");
scanf("%f %f %f",&P,&T,&R);
float SI = P*T*R/100;
printf("Simple interest is: %f",SI);
return 0;
}
