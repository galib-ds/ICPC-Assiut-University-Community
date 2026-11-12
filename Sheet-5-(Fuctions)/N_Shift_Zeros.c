#include<stdio.h>

void shift_0_r(int a[], int n){

    int cnt=0;
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            printf("%d ", a[i]);
            cnt++;
        }
    }

    if(cnt!=0){
        for(int i=0; i< n-cnt; i++){
            printf("%d ", 0);
        }
    }
    
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    shift_0_r(a,n); 

    return 0;
}