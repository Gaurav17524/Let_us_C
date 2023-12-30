#include<stdio.h>
#include<math.h>
int  main(){
    float v,t,wcf;
    printf("Enter the Velocity and Temperature of the Air");
    scanf("%f%f",&v,&t);
    wcf = 35.74 + 0.6215*t + ( 0.4275*t - 35.75 ) * pow(v,0.16);
    printf("the Temperature felt in skin is  :%f", wcf);
    return 0;
}