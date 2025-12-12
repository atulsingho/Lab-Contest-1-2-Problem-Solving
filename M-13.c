#include <stdio.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);
    double area = M_PI * r * r;
    double circumference = 2 * M_PI * r;
    
   
    printf("%.6f %.6f\n", area, circumference);
    
    return 0;
}
