#include<stdio.h>

int main()
{
    int n,k;
    int min;
    scanf("%d %d",&n,&k);
    
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    if (k<n){
    for(int i=0; i<n; i+=k){
        min=arr[i];
        for(int j=i; j<i+k; j++){
            if(min>arr[j]){
            min = arr[j];}
        }
        printf("%d ",min);
    }
    }else{
        min=arr[0];
        for(int j=0; j<n; j++){
            if(min>arr[j]){
            min = arr[j];}
        }
        printf("%d ",min);
    }
    
    return 0;
}