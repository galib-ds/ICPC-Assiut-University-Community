#include <stdio.h>

long long sum(int a[], int n){
    
    if (n == 0){
        return 0;
    }

    return a[n - 1] + sum(a, n - 1);
}

int main(){
    
    int n;
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("%lld\n", sum(a, n));

    return 0;
}