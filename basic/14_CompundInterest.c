#include<stdio.h>
#include<math.h>
int main(){
    float p,r,n,t,A,CI;
    scanf("%f %f %f %f",&p , &r , &n , &t);
    A = p*pow((1+r/n),(n*t));
    CI = A-p;
    printf("%f",CI);

    return 0;
}
