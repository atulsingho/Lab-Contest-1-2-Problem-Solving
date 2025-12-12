#include <stdio.h>
#include <math.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    double result = (double)A / B;
    long long floor_val = (long long)floor(result);
    long long ceil_val = (long long)ceil(result);
    long long round_val = (long long)round(result);
    printf("floor %d / %d = %lld\n", A, B, floor_val);
    printf("ceil %d / %d = %lld\n", A, B, ceil_val);
    printf("round %d / %d = %lld\n", A, B, round_val);
    return 0;
}
