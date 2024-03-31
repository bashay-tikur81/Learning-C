#include<stdio.h>

int main(){
    // Demonstrating pointers & void pointers
    int a, b;
    void *p = &a;
    a = 19;
    //printf("Value of a is: %d", *p); // this produces an error,we can't reference void pointer.

    double d = 100.1;
    int *p1;
    p1 = (int*)&d;
    printf("value at d: %d\n", *p1); // causes an error, since p1 is pointer to an integer.
    
}
