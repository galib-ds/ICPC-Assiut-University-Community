#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int bs=1, fs=n;
    int x=(n/2)+1;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n; j++){
            
            if(j==bs && j==fs){
                printf("X");
            }
            else if(j==bs){
            printf("\\");
            }
            else if(j==fs){
                printf("/");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
        bs++;
        fs--;
    }

    return 0;
}