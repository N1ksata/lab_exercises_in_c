#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y, z;
} Point;

double calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
}

int main() {
    // Масив от 9 точки (за 3 триъгълника)
    Point points[9] = {
        {0,0,0}, {1,1,0}, {0,1,0}, // Триъгълник 1
        {2,2,2}, {5,2,2}, {2,6,2}, // Триъгълник 2
        {0,0,5}, {3,0,5}, {0,4,5}  // Триъгълник 3
    };

    for (int i = 0; i < 3; i++) {
        int s = i * 3;
        printf("Triagalnik %d stranici:\n", i + 1);
        printf("A: %.2f\n", calculateDistance(points[s], points[s+1]));
        printf("B: %.2f\n", calculateDistance(points[s+1], points[s+2]));
        printf("C: %.2f\n", calculateDistance(points[s+2], points[s]));
        printf("------------------\n");
    }
    return 0;
}