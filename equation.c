//a*x^2+b*x+c=0
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int a, b, c, d;
float x1, x2, x3;
printf ("Введите a = ");
scanf ("%d", &a);
printf ("Введите b = ");
scanf ("%d", &b);
printf ("Введите c = ");
scanf ("%d", &c);
d = (b * b) - 4 * a * c;
x1 = (-b + sqrt(d)) / (2 * a);
x2 = (-b - sqrt(d)) / (2 * a);
x3 = (-b) / (2 * a);
if (d > 0) {
printf ("x1 = %f\n", x1);
printf ("x2 = %f\n", x2);
}
if (d == 0) {
printf ("x = %f\n", x3);
}
if (d < 0) {
printf ("Нет корней");
}
return 0;
}
