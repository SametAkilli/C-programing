#include <stdio.h>

struct point {
    int x;
    int y;
};

int main() {
    struct point p = {10, 20};

    printf("Point p is at (%d, %d)\n", p.x, p.y);

    return 0;
}

