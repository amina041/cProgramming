#include <stdio.h>
int main() {
    int m,n,o,p;

    m = sizeof(int);
    n = sizeof(char);
    o = sizeof(float);
    p = sizeof(double);

    printf("size of integer is: %d\n",m);
    printf("size of character is: %d\n",n);
    printf("size of float is: %d\n",o);
    printf("size of double is: %d\n",p);

    return 0;
}
