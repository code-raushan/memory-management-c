#include <stdio.h>

/**
 * Pointers are variables that store the memory address of another variable.
 * They are declared using the * symbol.
 * 
 * & is the address-of operator, which gives the memory address of a variable (returns the memory address of the variable).
 * * is the pointer operator, which gives the value of the variable stored in the pointer (dereferencing the pointer).
 */

int main(){
    int meaning_of_life = 789;
    int *pointer_to_meaning_of_life = &meaning_of_life;

    printf("value of meaning_of_life: %d\n", meaning_of_life);
    printf("value of pointer_to_meaning_of_life: %p\n", pointer_to_meaning_of_life);
    printf("value of pointer_to_meaning_of_life: %d\n", *pointer_to_meaning_of_life);

    return 0;
}