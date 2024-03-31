#include<stdio.h>

int main(){
    int *p, **q, a;
    a = 7;
    p = &a;
    q = &p;
    printf("a, p, q respectively %d %p %p\n", a,p,q);
    printf("%d, %d, %d\n", a, *p, **q);
}
