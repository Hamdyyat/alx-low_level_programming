#include <stdio.h>
#include "3-function_like_macro.h"

int main(void)
{
    int num = -5;
    int abs_num = ABS(num);
    
    printf("Absolute value of %d is %d\n", num, abs_num);
    
    return 0;
}

