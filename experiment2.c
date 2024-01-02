#include<stdio.h>
int main(){
    char c,f,unit;
    printf("Enter c  or f which you want ");
    scanf("%s",&unit);
    switch (unit)
    {
    case 'c':
    printf("enter temperature in centigrade ");
    scanf("%s",&c);
    f=(c*9/5)+32;
    printf("temperature in fahreinheit is %d",f);
    break;

    case 'f':
    printf("enter temperature in fahreinheit ");
    scanf("%s",&f);
    c=(f-32)*5/9;
    printf("temperature in calsius is %d",c);
    break;

    default:
    printf("you  are not entering c or f  ");
    return 0;
}
}