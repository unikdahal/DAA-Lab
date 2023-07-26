// 1.1 Aim of the program: Write a program to find out the second smallest and second largest
// element stored in an array of n integers.
// Input: Size of the array is ‘n’ and read ‘n’ number of elements from a disc file.
// Output: Second smallest, Second largest

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // for(int i=0;i<n;i++){
    //     printf("%d",arr[i]);
    // }

    // sorting

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    printf("Second Largest ELement is %d \n",arr[n-2]);
    printf("Second Smallest Element is %d",arr[1]);



}