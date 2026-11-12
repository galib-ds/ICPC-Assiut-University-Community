#include <stdio.h>

int main() {
    long long e, m, b;
    scanf("%lld %lld %lld", &e, &m, &b);

    long long first = e;
    if (m < first) first = m;
    if (b < first) first = b;

    e -= first;
    b -= first;

    long long second = e / 2;
    if (b < second) second = b;

    printf("%lld\n", first + second);

    return 0;
}