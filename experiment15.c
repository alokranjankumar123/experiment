#include<stdio.h>
int main(){
    int n,r1,nr=1,r=1,i,f=1;
    printf("enter n :");
    scanf("%d",&n);
    printf("enter r1 :");
    scanf("%d",&r1);
    for(i=2; i<=n; i++){
        f=f*i;
    }
    for(i=2; i<=r1; i++){
        r=r*i;
    }
    for(i=2; i<=(n-r1); i++){
    
        nr=nr*i;
    }
    int ncr=f/(r*nr);
    printf( "%d",ncr);
    return 0;
}