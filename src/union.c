#include<stdio.h>
typedef union{
    int i;
    char c;
    double d;
    float f;
}un_type;


int main(int argc, char **argv){

    // Creating array of mixed type using union
    un_type mixed_array[10];
    mixed_array[0].i = 1;
    mixed_array[1].c = 'A';
    mixed_array[2].d = 80.00;
    printf("%.2lf\n",mixed_array[2].d);

}
