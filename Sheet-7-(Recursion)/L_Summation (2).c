#include<stdio.h>

int sum(int arr[], int size, int i){
    if(i==size){
        return 0;
    }
    return arr[i]+sum(arr,size,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("%d",sum(a,n,0));
    return 0;
}