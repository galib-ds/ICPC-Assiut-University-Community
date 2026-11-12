#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    if(n%2==0){
        for(int i=0,j=n-1; i<j; i++,j--){
            printf("%d %d ",a[i], a[j]);
        }
    }else{
        for(int i=0,j=n-1; i<j; i++,j--){
            printf("%d %d ",a[i], a[j]);
        }
        printf("%d",a[(n-1)/2]);    
    }

    return 0;
}