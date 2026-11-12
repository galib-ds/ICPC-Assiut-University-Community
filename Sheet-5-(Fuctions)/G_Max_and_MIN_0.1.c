#include<stdio.h>

int minimum(int arr[], int size){
    int min = arr[0];
    for(int i=0; i<size; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int maximum(int arr[], int size){
    int max = arr[0];
    for(int i=0; i<size; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    printf("%d %d", minimum(a,n), maximum(a,n));

    return 0;
}