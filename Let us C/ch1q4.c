#include<stdio.h>
int main(){
    float fren;
    float celsisus;
    printf("Enter the temperature in frenhite\n");
    scanf("%f",&fren);
    celsisus=(fren-32)/1.8;
    printf("the temperature in celsisus is %f\n",celsisus);
    return 0;
    
}