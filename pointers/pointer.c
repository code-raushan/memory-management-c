#include <stdio.h>

int main(){
    int meaning_of_life = 789;
    int *pointer_to_meaning_of_life = &meaning_of_life;

    printf("value of meaning_of_life: %d\n", meaning_of_life);
    printf("value of pointer_to_meaning_of_life: %p\n", pointer_to_meaning_of_life);
    printf("value of pointer_to_meaning_of_life: %d\n", *pointer_to_meaning_of_life);

    return 0;
}