#include <stdio.h>

int main(){
    printf("We will check that C is a compiled language. \n ");
    does_not_exists("failure"); 
    printf("Would never run. \n");

    return 0;
}
// the program will not compile: 
// error: call to undeclared function 'does_not_exists'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
//     does_not_exists("failure");
//     ^
// 1 error generated.