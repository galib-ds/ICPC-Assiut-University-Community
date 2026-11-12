#include<stdio.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int op=0;
    bool opr=true;

    while(true){

        for(int i=0; i<n; i++){
            
            if(a[i]%2==0){
                a[i]/=2;
            }else{
                opr = false;
                break;
            }
        }

        if(opr==true){
            op++;
        }else{
            break;
        }

    }

    printf("%d",op);

    return 0;
}