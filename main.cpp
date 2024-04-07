#include "mbed.h"
#include <cstdio>

int n_1 = 0;
int n_2 = 1;
int n_3 = 0;

int max_value = 30;
// main() runs in its own thread in the OS
int main()
{
    printf("lab 2 start!!\r\n");

    printf("series is: %d, %d, ", n_1, n_2);

    for(int i=3; i<=max_value; i++){
        n_3 = n_1 + n_2;
        printf("%d, ", n_3);
        n_1 = n_2;
        n_2 = n_3;

    }
    printf("\r\n");

    while (true) {

    }
}

