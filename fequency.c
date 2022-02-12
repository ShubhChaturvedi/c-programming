#include<stdio.h>
#include<math.h>
int main(){
    long int frequency, speed=3*pow(10,8), wavelength;
    printf("enter the wavelength=");
    scanf("%d",&wavelength);
    frequency=speed/wavelength;
    printf("fequency= %d", frequency);
}