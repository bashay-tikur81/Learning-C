#include<stdio.h>
#define SIZE 50
void print_vertical(char *);

int main(){
    char s[SIZE];
    printf("String to be written in vertically: ");
    scanf("%[^'\n']s", s);
    print_vertical(s);
}

void print_vertical(char *str){
    while(*str)
	printf("%c\n", *str++);
}
