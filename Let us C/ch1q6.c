#include<stdio.h>
#include<math.h>
int main(){
    int height=1189;
    int wid=841;
    int temp;
    for(int i=0;i<9;i++){
        printf("the dimension of paper A%d is \n%d * %d\n",i,height,wid);
        temp=height;
        height=wid;
        //temp=height/2;
        wid=temp/2;
    }
    return 0;
}