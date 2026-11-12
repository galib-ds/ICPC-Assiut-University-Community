#include<stdio.h>
int max(int arr[], int size, int i){
    if(i==size-1){
        return arr[i];
    }
    int num = max(arr,size,i+1);
    if(num>arr[i]){
        return num;
    }else{
        return arr[i];
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("%d",max(a,n,0));

    return 0;
}