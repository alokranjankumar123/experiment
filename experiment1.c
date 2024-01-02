#include<stdio.h>
int main(){
    float interest;
    float principal,rate,time;
    

    printf("enter principal amount:");
    scanf("%f",&principal);

    printf("enter rate amount:");
    scanf("%f",&rate);

    printf("enter time amount:");
    scanf("%f",&time);

    interest=(principal*rate*time)/100;
    printf("simpleinterest=%.2f\n",interest);
return 0;
}