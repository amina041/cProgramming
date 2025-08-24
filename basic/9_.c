#include <stdio.h>
int main(){
    float F,C;

    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&F);

    C = (F-32)/1.8;

    printf("Temperature in Celsius is %f",C);

    return 0;

}
