#include<stdio.h>
#include<stdlib.h>
#define SIZE 50
void print_reverse(char *, int);

int main(){
    int len;
    char s[SIZE];
    printf("Enter a string to reverse: ");
    scanf("%[^'\n']s", s);
    len = (sizeof(s)) / (sizeof(s[0]));
    print_reverse(s, len);

}

void print_reverse(char *s, int len){
    int j = 0;
    int array_len = 0;
    while(*s){
	s++;
	array_len++;
    }
    char rev[array_len];
    while(array_len){
	s--;
	rev[j] = *s;
	array_len--;
	j++;
    }
    printf("not reversed: %s\n", s);
    printf("When reversed: %s\n", rev);
}
