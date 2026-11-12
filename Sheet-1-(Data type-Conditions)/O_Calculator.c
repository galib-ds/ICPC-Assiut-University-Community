#include<stdio.h>

int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);

    switch (s)
    {
    case '+':
        printf("%d\n",a+b);
        break;
    case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        if(b==0){
            break;
        }else{
            printf("%d\n",a/b);
            break;
        }
    default:
        break;
    }

    return 0;
}