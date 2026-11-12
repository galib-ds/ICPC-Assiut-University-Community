#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    int cnt_pr=0, cnt_sc=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cnt_pr+=a[i][j];
            }
            if(i+j==n-1){
                cnt_sc+=a[i][j];
            }
        }
    }

    int diff = cnt_pr-cnt_sc;

    if(diff<0)
        diff*=-1;

    printf("%d",diff);

    return 0;
}