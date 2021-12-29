#include <stdio.h>
#include <stdlib.h>

#include "vector.h"

int main()
{
    typedef char str;
    vector(str) vec = str_vector_new();
    // Must typedef pointer types and types with spaces inbetween words, such as unsigned int.
    // strings still not supported yet, will add them very soon if possible

    typedef unsigned long int long_unsigned_int_wow;
    vector(long_unsigned_int_wow) u_vec = long_unsigned_int_wow_vector_new();
    long_unsigned_int_wow_vector_push_back(u_vec, 5);
    // Wow! still works!
    

    return 0;
}