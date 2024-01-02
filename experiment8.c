#include<stdio.h>
int main(){
    int i,sum=0,a[10]={2,4,5,7,9,8,1,10,3,6};
    //int temp=a[0];
    for(i=0;i<10;i++){
        sum=sum+a[i];
//pos=i;
    }
    printf("sum of array is %d\n",sum);
    return 0;
}