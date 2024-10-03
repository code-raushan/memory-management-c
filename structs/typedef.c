#include <stdio.h>
#include "person.h"

int main(){
    person_t p1 = {
        .name = "Raushan",
        .age= 10
    };

    printf("name: %s\n age: %d\n", p1.name, p1.age);

    return 0;
}