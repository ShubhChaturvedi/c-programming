#include<stdio.h>
int main(){
    int a=5, b=22;
    printf("%d", a);
    printf("%d", b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("after swaping");
    printf("%d", a);
    printf("%d", b);
}