#include<stdio.h>
int main(){
    int salary;
    int drall;
    int hsall;
    int gsal;
    scanf( "%d",&salary);
    drall=0.4*salary;
    hsall=0.2*salary;
    gsal=salary+drall+hsall;
    printf("The gross salary of ramesh is %d\n",gsal);
    return 0;

}
