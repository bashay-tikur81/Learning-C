#include<stdio.h>

int main(int argc, char **argv){
    char msg [] = "This is C!";
    printf("Left padding: %15s\n",msg);
    printf("Right padding: %-15s END\n",msg);
    printf("Slicing the string: %.2s\n",msg);
    printf("Percentage sign: %%\n");
}
