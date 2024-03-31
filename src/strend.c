#include<stdio.h>

int strend(char *, char*);

int main(){

    printf("%d\n",strend("I love c!", "love c!"));

    
}

int strend(char *t, char *s){
    int len = 0;
    char *s_base;
    char *t_base;
    s_base = s;
    t_base = t;
    while(*t)
	t++;
    while(*s){ // we can't use (*s++) in while, since s is evaluated twice at the end
	s++;
	len++;
    }
    len++; // length of a string exceed by 1 since there is '\0' at end
    while(*t-- == *s--)
	len--;
    
    /* returning the pointers to where they initially points to */
    s = s_base;
    t = t_base;
    
    return !len;


}
