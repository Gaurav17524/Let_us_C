#include<stdio.h>
int main(){
    float eng;
    float Comp;
    float cod;
    float fore;
    float sec;
    printf("Enter the Marks of the Stundents\n");
    scanf("%f%f%f%f%f",&eng,&Comp,&cod,&fore,&sec);
    float avgm=(eng+Comp+cod+fore+sec)/5;
    printf("the average marks is %f\n",avgm);
    float perc=((eng+Comp+cod+fore+sec)/500)*100;
    printf("the Percentage of Stundent is %f\n",perc);
    return 0;
}