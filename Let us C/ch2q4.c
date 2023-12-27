#include<stdio.h>
#include<math.h>
int main(){
    float x;
    float y;
    float px;
    float py;
    printf("enter the co-ordinates of x and y\n");
    scanf("%f%f",&x,&y);
    px=sqrt( pow(x,2)+ pow(y,2));
    py=atan( y / x );
    printf("the Polar co-ordinates of X and  Y is %f , %f", px, py);
    return 0;
}