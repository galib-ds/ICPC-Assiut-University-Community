#include<stdio.h>
#include<string.h>

void print_dgt(char str[], int len, int i){
    if(i==len){
        printf("\n");
        return;
    }
    printf("%c ",str[i]);
    print_dgt(str,len,i+1);
}

int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        char n[1000001];
        scanf("%s",n);
        int len = strlen(n);

        print_dgt(n,len,0);
  
    }
    
    return 0;
}