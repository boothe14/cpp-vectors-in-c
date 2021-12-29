#include <stdio.h>
#include "vector.h"

char alphabet[26] = {
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
};

vector_impl(char);

int main()
{
    vector(char) vec = char_vector_new();

    for(int i = 0; i < sizeof(alphabet)/sizeof(*alphabet); i++)
    {
        char_vector_push_back(vec, alphabet[i]);
    } // takes every character from the alphabet char array and pushes it onto our vector

    for(int i = 0; i < VECTOR_SIZE(vec); i++)
    {
        if(i+1 < VECTOR_SIZE(vec)) // if i+1 isn't out of bounds
        {
            char_vector_swap(vec, i, i+1);
        }
    } // goes through our char vector and swaps i element with i+1

    for(int i = 0; i < VECTOR_SIZE(vec); i++)
    {
        printf("%c", char_vector_at(vec, i));
    } // prints bcdefghijklmnopqrstuvwxyza


    return 0;
}