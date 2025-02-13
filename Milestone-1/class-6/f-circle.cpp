
/* 

Write a program which calculates the area and circumference of a circle for given radius r

area = pi * r * r
circuference = 2 * pi * r

 */

# include <stdio.h>
# include <math.h>

int main () {

    double pi = acos(-1) , r;
    scanf("%lf", &r);
    double area = pi * r * r;
    double circuference = 2 * pi * r;
    printf("%.6lf %.6lf", area, circuference);
}