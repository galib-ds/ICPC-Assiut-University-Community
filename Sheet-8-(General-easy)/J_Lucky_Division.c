
#include <stdio.h>

int main(){
    
    int n, lucky, temp, isLucky, found = 0;

    scanf("%d", &n);

    for (lucky = 1; lucky <= n; lucky++){
        
        temp = lucky;
        isLucky = 1;

        while (temp > 0){

            int digit = temp % 10;

            if (digit != 4 && digit != 7)
            {
                isLucky = 0;
                break;
            }

            temp /= 10;
        }

        if (isLucky && n % lucky == 0){
        
            found = 1;
            break;
        }
    }

    if (found)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
