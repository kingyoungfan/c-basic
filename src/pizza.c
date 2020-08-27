//
// Created by Mr.Yang on 8/22/20.
//

#include <stdio.h>
#include <limits.h>

#define PI 3.1415926

void pizza() {
    double area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%lf", &radius);
    // 圆的面积
    area = PI * radius * radius;
    // 圆的周长
    circum = 2 * PI * radius;
    printf("c=%0.2f, a=%1.2lf\n", circum, area);
    printf("PI=%f\n", PI);
    printf("Max int value on this system = %d\n", INT_MAX);
    printf("Min int value on this system = %d\n", INT_MIN);
}