#include<stdio.h>

int num_series(void);
int main(){
    /* the use of static storage specifier */
    printf("%d\n", num_series());
    printf("%d\n", num_series());
    printf("%d\n", num_series());
}

int num_series(void){
    static int b = 100;
    b = b + 100;
    return b;
}
