#include <stdio.h>
#include "hxc_vector.h"
#include <math.h>

int main(void)
{
    vec3i test1 = VEC3I_IDENTITY;
    vec3i test2 = { 2, 2, 2 };

    vec3i result = vec3i_addr(test1, test2);

    printf("Result vector: (%d, %d, %d)\n", result.x, result.y, result.z);

    return 0;
}