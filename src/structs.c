#ifndef STRUCTS_C
#define STRUCTS_C
#include <stdbool.h>
#include <stdlib.h>

typedef struct element{
    float valency;
    char *label;
    float atomic_number;
    float atomic_mass;
    bool has_variable_nox;
    float nox_number; // if nox isn't variable
    char *eletronic_config;
      
} Element;







#endif