#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int sum=0;
    printf("enter the Five-Digit number");
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        int dig=num % 10;
        sum=sum+dig;
        num=num/10;
    }
    printf("the sum of Digits of a number is %d\n",sum);
    return 0;
}