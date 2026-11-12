#include<stdio.h>
#include<stdbool.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    
    char s[a+b+2];
    scanf("%s",s);

    bool chk = true;

    for(int i=0; i<a+b+1; i++){
        if(i==a){
            if(s[i]!='-'){
                chk=false;
            }
        }else{
            if(s[i]<'0'||s[i]>'9'){
                chk=false;
            }
        }
    }

    if(chk == true){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}