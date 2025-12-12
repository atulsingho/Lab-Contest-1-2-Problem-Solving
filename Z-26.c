#include <stdio.h>
#include <stdlib.h>
int min_of_three(int a, int b, int c) {
    if (a <= b && a <= c) return a;
    if (b <= a && b <= c) return b;
    return c;
}
int max_of_three(int a, int b, int c) {
    if (a >= b && a >= c) return a;
    if (b >= a && b >= c) return b;
    return c;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int min_val = min_of_three(A, B, C);
    int max_val = max_of_three(A, B, C);
    printf("%d %d\n", min_val, max_val);

    return 0;
}
