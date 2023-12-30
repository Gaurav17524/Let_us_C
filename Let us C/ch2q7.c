#include<stdio.h>
#include<math.h>
int  main(){
    int C,D,temp;
    printf("Enter Two number Respectively");
    scanf("%d%d",&C,&D);
    printf("the Value of C and D is %d , %d Respectively\n",C,D);
    temp=D;
    D=C;
    C=temp;
    printf("The Value of C and D after Interchanging the value is %d , %d Respectively\n",C,D);
    return 0;
}