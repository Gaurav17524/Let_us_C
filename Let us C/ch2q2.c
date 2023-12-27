#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int rev=0;
    printf("enter the Five-Digit number");
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        int dig=num % 10;
        rev=rev*10 + dig;
        num=num/10;
    }
    printf("the Reverse of a  number is %d\n",rev);
    return 0;
}