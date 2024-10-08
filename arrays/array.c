#include <stdio.h>

int main(){
    int arr[3] = {1, 2, 3};

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n", arr[2]);

    for (int i=0; i<3; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}