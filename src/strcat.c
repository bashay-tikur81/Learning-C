#include<stdio.h>

void strconcat(char *s, char *t);

int main(){
    char name[100]  = "Bashay";
    char *father = "Tikur";
    strconcat(name,father);
    printf("%s\n", name);
    
}

void strconcat(char *s, char *t){
    while(*s)
	s++;
    *s = ' '; // adding space to separate them
    while(*++s = *t++)
	;

    
}
