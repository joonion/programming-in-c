#include <stdio.h>

double PI = 3.14;
double pi;

double getCircumference(double r);

double getArea(double r)
{
    return r * r * PI;
}

int main()
{
    double r = 5.87;
    const double PI = 3.141592;

    printf("면적: %.2f\n", getArea(r));
    printf("둘레: %.2f\n", getCircumference(r));
    printf("PI: %f\n", PI);
    printf("pi: %f\n", pi);
}
