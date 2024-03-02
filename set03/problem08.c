#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
} Polygon;

int input_n() {
    int n;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &n);
    return n;
}

Point input_point(char *prompt_msg) {
    Point pt;
    printf("%s\n", prompt_msg);
    printf("Enter x-coordinate: ");
    scanf("%f", &pt.x);
    printf("Enter y-coordinate: ");
    scanf("%f", &pt.y);
    return pt;
}

int input_polygon(Polygon *p) {
    p->sides = input_n();
    printf("Enter the coordinates for each point of the polygon:\n");
    for (int i = 0; i < p->sides; i++) {
        p->p[i] = input_point("");
    }
    return p->sides;
}

float find_distance(Point a, Point b) {
    return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}

void find_perimeter(Polygon *p) {
    float perimeter = 0.0;
    for (int i = 0; i < p->sides - 1; i++) {
        perimeter += find_distance(p->p[i], p->p[i + 1]);
    }
    perimeter += find_distance(p->p[p->sides - 1], p->p[0]);
    p->perimeter = perimeter;
}

void output(Polygon p) {
    printf("Perimeter of the polygon is: %.2f\n", p.perimeter);
}

int main() {
    Polygon poly;
    input_polygon(&poly);
    find_perimeter(&poly);
    output(poly);
    return 0;
}
