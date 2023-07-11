#include<stdio.h>
int main(){
    double a;
    int b;
    double c;
    int d;
    double e;
    int f;
    scanf("%lf %d %lf %d %lf %d", &a, &b, &c, &d, &e, &f);
    double sum;
    sum = a*b + c*d + e*f;
    printf("%.1lf", sum);
}
