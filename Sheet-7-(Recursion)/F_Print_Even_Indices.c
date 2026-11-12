#include<stdio.h>

void print_array(int arr[], int size, int index){
    
    if(index==-1){
        return;
    }

    if(index%2==0){
        printf("%d ",arr[index]);
    }
    
    print_array(arr,size,index-1);
}

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    print_array(a,n,n-1);

    return 0;
}