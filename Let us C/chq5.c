#include<stdio.h>
#include<math.h>
int main(){
    float leng;
    float bred;
    float radi;
    float arr;
    float peri;
    float arc;
    float circ;
    printf("Enter the length\n");
    scanf("%f",&leng);
    printf("Enter the Breadth\n");
    scanf("%f",&bred);
    printf("Enter the Radius\n");
    scanf("%f",&radi);
    arr=leng*bred;
    printf("the Area of rectangle is %f\n",arr);
    peri=2*(leng+bred);
    printf("the perimeter of rectangle is %f\n",peri);
    arc=3.1427*radi*radi;
    printf("the Area of circle  is %f\n",arc);
    circ=2*3.1427*radi;
    printf("the circumference of circle is %f\n",circ);
    return 0;
    
}