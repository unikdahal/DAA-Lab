// 1.3 Aim of the program: Write a program to read ‘n’ integers from a disc file that must contain
// some duplicate values and store them into an array. Perform the following operations on the
// array.

// a) Find out the total number of duplicate elements.
// b) Find out the most repeating element in the array.

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // Total no of duplicate element

    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        arr1[i]=0;
        arr2[i]=0;
    }


    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                if(arr2[i]==0){
                    arr2[i]=1;
                    count++;
                }
                arr2[j]=1;
                arr1[i]++;
            }
        }
    }

    int highest=0;
    int index=0;

    for(int i=0;i<n;i++){
        if(arr1[i]>highest){
            highest=arr1[i];
            index=i;
        }
    }

    printf("Total no of duplicate element is %d \n",count);
    printf("Most repeating element is %d",arr[index]);

    

   
    

}