#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

typedef unsigned long int veeeery_long_name;
typedef const_charp const char*;
vector_impl(veeeery_long_name);
vector_impl(const_charp);

int main()
{
    vector(const_charp) const_charp_vector_new();
    // Must typedef pointer types and types with spaces inbetween words, such as unsigned int.
    // strings still not supported yet, will add them very soon if possible

    vector(veeeery_long_name) u_vec = veeeery_long_name_vector_new();
    veeeery_long_name_vector_push_back(u_vec, 5);
    // Wow! this works!
    

    return 0;
}