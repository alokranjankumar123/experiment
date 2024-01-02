#include<stdio.h>
int main(){
     int i,pos,a[14]={9,2,3,4,6,8,5,7,14,1,10,12,11,13};
    int temp=a[0];
    
    for(i=0;i<14;i++){
        if(a[i]>=temp){
            temp=a[i];
            pos =i;
        }
    }
    printf("largest number %d\n",temp);








    return 0;
}
