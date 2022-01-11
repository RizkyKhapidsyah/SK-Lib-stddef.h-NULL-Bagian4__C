#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    // any kind of pointer can be set to NULL
    int* p = NULL;
    struct S* s = NULL;
    void(*f)(int, double) = NULL;

    // many pointer-returning functions use null pointers to indicate error
    char* ptr = malloc(0xFULL);
    if (ptr == NULL) {
        printf("Out of memory");
    }

    free(ptr);
    
    _getch();
    return 0;
}