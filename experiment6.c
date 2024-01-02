#include<stdio.h>
//int main(){
    //int i,a[5]={2,3,5,1,4};
    //printf("enter array elements:");
    //scanf("%d",&a[i]);
    //for(i=0;i<=5;i++){
    //#include <stdio.h>

void print_odd_indexed_elements(int arr[], int size){
    printf("Odd-indexed elements:\n");
    for (int i = 1; i < size; i += 2) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5, 6, 7};
    int array_size = sizeof(my_array) / sizeof(my_array[0]);

    print_odd_indexed_elements(my_array, array_size);

    return 0;
}
    

   // }
   // printf("value of index %d%d",i,a[0] );
    //return 0;
