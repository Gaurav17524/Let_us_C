#include<stdio.h>
#include<math.h>
int main(){
    float base;
    float Height;
    printf("enter the side of the triangles\n");
    scanf("%f%f",&base,&Height);
    float arr = (1.0/2) *base * Height;
    printf("the area of the triangle is %f\n",arr);
    return 0;
}