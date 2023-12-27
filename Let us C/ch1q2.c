#include<stdio.h>
int main(){
    float dist;
    float mtr;
    float inc;
    float ft;
    printf("Enter the distance in KM");
    scanf("%f",&dist);
    mtr=1000*dist;
    ft=3280.8399*dist;
    inc=39370.0787+dist;
    printf("distance in meter is %f\n distance in inches is %f\n distance in feet is %f\n",mtr,inc,ft);
    return 0;
}