#include<stdio.h>

void minValue(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=1+i; j<n; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("%d %d", a[0], a[n-1]);
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    minValue(a,n);

    return 0;
}