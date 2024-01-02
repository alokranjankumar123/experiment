#include<stdio.h>
int main(){
    int  i,pos1,pos2,sum=0,numb[15]={8,2,1,3,6,5,7,10,9,12,15,13,14,11,4};
    int temp=numb[0];
    int a=numb[0];
    for(i=0;i<15;i++){
        if(numb[i]<=temp){
            temp=numb[i];
            pos1 =i;
        }
if(numb[i]>=a){ 
            a=numb[i];
            pos2 =i;
}
sum=sum+numb[i];
    }    
    printf("minimum in array is %d\n",temp);
    printf("maximum in array is %d\n",a);
   printf("average is %d\n",sum/15);
    return 0;
}