#include<stdio.h>
int main(){
    int i,j,sum=0,a[3][3];
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){    
    printf("enter the matrix\n");
    scanf("%d",&a[i][j]);
        }
      }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
    if(i==j){

        sum=sum+a[i][j];
    }}}
printf("sum of diagonal elements is %d",sum);
    return 0;
}