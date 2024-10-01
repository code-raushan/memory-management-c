#include <stdio.h>
#include "coords.h"


struct Coordinate print_coord(int x, int y, int z ) {
    struct Coordinate c_print = {
        .x = x,
        .y = y,
        .z = z
    };

    printf("x: %d, y: %d, z: %d \n", c_print.x, c_print.y, c_print.z);

    return c_print;
}

int main(){
    struct Coordinate c = {0}; // zero initializer
    printf("x: %d, y: %d, z: %d \n", c.x, c.y, c.z);

    struct Coordinate c_pos = {11, 22, 33}; // positional initializer
    printf("x: %d, y: %d, z: %d \n", c_pos.x, c_pos.y, c_pos.z);

    struct Coordinate c_des = {
        .x = 22,
        .y = 33,
        .z = 44
    }; // designated initializer

    printf("x: %d, y: %d, z: %d \n", c_des.x, c_des.y, c_des.z);

    print_coord(10, 20, 30);

    return 0;
}
