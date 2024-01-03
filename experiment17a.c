#include<stdio.h>


int main (){
    FILE* fp;

    fp=fopen("test.txt","w");

    if(fp!=NULL)
    printf("file open succesfully");
    else
    printf("file does not  exist");
fputs("i study in fot",fp);
return 0;    
}