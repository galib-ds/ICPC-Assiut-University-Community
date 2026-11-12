#include<stdio.h>
#include<string.h>

void cnt_vowel(char str[], int len,int i,int v_cnt){
    if(i==len){
        printf("%d",v_cnt);
        return;
    }
    if(str[i]=='a'||str[i]=='A' ||
       str[i]=='e'||str[i]=='E' ||
       str[i]=='i'||str[i]=='I' ||
       str[i]=='o'||str[i]=='O' ||
       str[i]=='u'||str[i]=='U' 
    ){
        v_cnt++;
    }
    cnt_vowel(str,len,i+1,v_cnt);
}

int main()
{
    char str[201];
    fgets(str,201,stdin);
    
    int len = strlen(str);
    int v_cnt=0;

    cnt_vowel(str,len,0,0);

    return 0;
}