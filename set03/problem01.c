#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1, y1, x2, y2, distance;
    input(&x1, &y1, &x2, &y2); 
    distance = find_distance(x1, y1, x2, y2);
    output(x1, y1, x2, y2, distance); 
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the coordinates of the first point: ");
    scanf("%f %f", x1, y1);
    printf("Enter the coordinates of the second point: ");
    scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is %.2f units.\n", x1, y1, x2, y2, distance);
}

