#include<stdio.h>
int main(){
    int a, i=1;
    printf("enter a number\n");
    scanf("%d", &a);
    while(a>0){
        i=i*a;
        a-=1;
    }
    printf("factorial is %d", i);
}