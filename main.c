#include <stdio.h>
#include <math.h>

int main(void){
    double a;
    float b,c1,c2, pi;
    scanf("%lf",&a);
    c1 = (sin(2*a) + sin(5 * a) - sin(3*a)) /cos(a) + 1 - 2 * pow(sin(2*a),2);
    c2 = 2 * sin(a);
    printf("%lf %lf",c1,c2);
    return 0;
}

