#include<stdio.h>

int main(){
    /* using the specifier extern for telling the compiler variable is defined elsewher */
    extern int last, first;
    printf("First %d, Last %d\n", first,last);
}

int first = 10, last = 20;
