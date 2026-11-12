#include<stdio.h>

int main()
{
    char s;
    scanf("%c", &s);
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        int v;
        scanf("%d",&v);
        for(int j=1; j<=v; j++){
            printf("%c",s);
        }printf("\n");
    }
    return 0;
}