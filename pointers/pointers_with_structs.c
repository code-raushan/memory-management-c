#include <stdio.h>

typedef struct Coordinate {
    int x;
    int y;
    int z;
} coord_t;

int main(){
    coord_t point;
    point.x = 10;
    point.y = 20;
    point.z = 30;

    coord_t *point_ptr = &point;

    point_ptr->x = 100;

    printf("point.x = %d\n", point.x);
    printf("pointer_to_point.x = %d\n", point_ptr->x);
    printf("(*point_ptr).x = %d\n", (*point_ptr).x);

}