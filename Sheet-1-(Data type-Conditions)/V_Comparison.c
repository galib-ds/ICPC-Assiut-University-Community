#include<stdio.h>

int main()
{
    int a,b;
    char s;
    scanf("%d %c %d",&a,&s,&b);

    switch (s){
    
    case '>':
        if(a>b){
            printf("Right\n");
            break;
        }else{
            printf("Wrong\n");
            break;
        }
    
    case '<':
        if(a<b){
            printf("Right\n");
            break;
        }else{
            printf("Wrong\n");
            break;
        }

    case '=':
        if(a==b){
            printf("Right\n");
            break;
        }else{
            printf("Wrong\n");
            break;
        }
        
    default:
        break;
    }

    return 0;
}