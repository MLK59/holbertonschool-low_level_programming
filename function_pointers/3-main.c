#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


int main(int argc, char *argv[])
 {
    int num1;
    int num2;
    int result;

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);
    char *operator = argv[2];

    if (argc != 4) 
    {
        printf("Error\n");
        return (98);
    }

    int (*func)(int, int) = get_op_func(operator);


    if (func == NULL) 
    {
        printf("Error\n");
        return (99);
    }

    result = func(num1, num2);
    printf("%d\n", result);

    return (0);
}
