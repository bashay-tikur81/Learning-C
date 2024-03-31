#include<stdio.h>

struct point{
    int x;
    int y;
};
struct rect {
    struct point p1;
    struct point p2;
}

struct point makepoint(int, int);

int main(int argc, char **argv){

    
}

struct point makepoint(int a, int b){
    struct point temp;
    temp.x = a;
    temp.y = b;
    return temp;

}
