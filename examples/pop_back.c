#include <stdio.h>
#include "vector.h"

int main()
{
    vector(float) vec = float_vector_new();

    float_vector_push_back(vec, 5.0f);

    float_vector_pop_back(vec);

    int c = VECTOR_SIZE(vec);
    // c = 0

    return 0;
}