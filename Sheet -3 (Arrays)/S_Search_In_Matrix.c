#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    int x;
    scanf("%d",&x);

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]==x){
                printf("will not take number\n");
                return 0;
            }
        }
    }

    printf("will take number\n");

    return 0;
}