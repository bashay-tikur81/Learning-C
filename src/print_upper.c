#include<stdio.h>

void print_upper(char *s);

int main(){
    char s[20];
    printf("to upper case: ");
    scanf("%[^'\n']s", s);

    print_upper(s);
    printf("To upper case:\n%s\n", s);
    
}

void print_upper(char *s){
    while(*s){
	if(*s <= 123 && *s >= 97)
	    *s = ((int) *s) - 32;
	s++;
    }
}
