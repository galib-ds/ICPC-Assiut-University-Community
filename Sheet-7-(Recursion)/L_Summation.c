#include<stdio.h>

long long array_sum(long long arr[], int size, long long sum, int i){

    if(i==size){   
        return sum;
    }
    sum+=arr[i];
    array_sum(arr,size,sum,i+1);
}

int main()
{
    int n;
    scanf("%d",&n);

    long long a[n];
    for(int i=0; i<n; i++){
        scanf("%lld",&a[i]);
    }

    printf("%lld", array_sum(a,n,0,0));

    return 0;
}