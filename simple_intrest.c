#include<stdio.h>
int main(){
    int p,r,t,SI;
    printf("enter the principle amount\n");
    scanf("%d",&p);
    printf("enter the intrest rate amount\n");
    scanf("%d",&r);
    printf("enter the time in years\n");
    scanf("%d",&t);
    SI=p*r*t/100;
    printf("%d",SI);

}
