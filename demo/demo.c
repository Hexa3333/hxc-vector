#include <stdio.h>
#include "vector.h"
#include <math.h>

int main(void)
{
    vec3i test1 = { 5, 3, 3 };
    vec3i test2 = { 2, 2, 2 };

    vec3i result = vec3i_addr(test1, test2);

    printf("Result vector: (%d, %d, %d)\n", result.x, result.y, result.z);

    return 0;
}