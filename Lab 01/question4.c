
#include<stdio.h>

void exchange(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}

void rotate_right(int arr[],int m){

    for(int i=m-2;i>=0;i--){
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
    }

}

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int m;
    printf("Enter the no of elements to be rotated \n");
    scanf("%d",&m);

    rotate_right(arr,m);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}