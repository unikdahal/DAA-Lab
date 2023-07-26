#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Original Array is \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");

    int sum=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];

        arr[i]=sum;
    }

    printf("Prefic Sum Array is \n");

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}