#include<stdio.h>

void double_pointer(int **);
int main(int argc, char **argv){
    int *p = NULL;
    int a = 4;
    p = &a;
    double_pointer(&p);
    printf("%d\n",*p);
    
}
void double_pointer(int **b){
    int c = 5;
    *b = &c;

}
