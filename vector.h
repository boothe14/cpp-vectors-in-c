#pragma once
#include <stdlib.h>
#define MAX_VECTOR_SIZE 2147483647
#define vector_impl(type)                                              \
    typedef struct                                                     \
    {                                                                  \
        type m_list[MAX_VECTOR_SIZE];                                  \
        int m_count;                                                   \
        int m_max_usable;                                              \
    } type##_vector;                                                   \
    type type##_vector_at(type##_vector *vec, int index)               \
    {                                                                  \
        return vec->m_list[index];                                     \
    };                                                                 \
    void type##_vector_push_back(type##_vector *vec, type obj)         \
    {                                                                  \
        if (vec->m_count + 1 < vec->m_max_usable)                      \
        {                                                              \
            vec->m_list[vec->m_count++] = obj;                         \
        }                                                              \
    }                                                                  \
    void type##_vector_erase(type##_vector *vec)                       \
    {                                                                  \
        for (int i = 0; i < vec->m_count; i++)                         \
        {                                                              \
            vec->m_count = 0;                                          \
        }                                                              \
    }                                                                  \
    type##_vector *type##_vector_new()                                 \
    {                                                                  \
        type##_vector *c = malloc(sizeof(type##_vector));              \
        c->m_count = 0;                                                \
        c->m_max_usable = MAX_VECTOR_SIZE;                             \
        return c;                                                      \
    };                                                                 \
    type type##_vector_front(type##_vector *vec)                       \
    {                                                                  \
        return vec->m_list[vec->m_count];                              \
    };                                                                 \
    void type##_vector_pop_back(type##_vector *vec)                    \
    {                                                                  \
        vec->m_list[vec->m_count--] = 0;                               \
    };                                                                 \
    void type##_vector_swap(type##_vector *vec, int first, int second) \
    {                                                                  \
        type temp = vec->m_list[first];                                \
        vec->m_list[first] = vec->m_list[second];                      \
        vec->m_list[second] = temp;                                    \
    };                                                                 \
    void type##_vector_shrink_to_fit(type##_vector *vec, int size)     \
    {                                                                  \
        vec->m_max_usable = size;                                      \
        if (vec->m_count > vec->m_max_usable)                          \
        {                                                              \
            for (int i = vec->m_max_usable; i < vec->m_count; i++)     \
            {                                                          \
                vec->m_list[i] = 0;                                    \
                vec->m_count -= 1;                                     \
            }                                                          \
        }                                                              \
    }                                                                  \
    type type##_vector_back(type##_vector *vec)                        \
    {                                                                  \
        return vec->m_list[0];                                         \
    };

#define vector(type) type##_vector*

#define VECTOR_SIZE(vec) vec->m_count