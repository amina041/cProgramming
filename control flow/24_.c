#include <stdio.h>
int main(){
double a,b;
char c;

    printf("Enter value: ");
    scanf("%d %c %d",&a,&c,&b);

    if(c == '+'){
        printf("= %f",a+b);
    }

    if(c == '-'){
        printf("= %f",a-b);
    }

    if(c == '*'){
        printf("= %f",a*b);
    } 

    if(c == '/'){
        printf("= %f",a/b);
    }

return 0;
}

