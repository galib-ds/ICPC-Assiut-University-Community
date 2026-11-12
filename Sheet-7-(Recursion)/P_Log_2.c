#include <stdio.h>

long long log2(long long num)
{
    if (num <= 1) {
        return 0;
    }
    return 1 + log2(num / 2);
}

int main(void)
{
    long long n;
    scanf("%lld", &n);

    printf("%lld", log2(n));

    return 0;
}