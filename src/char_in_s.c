#include<stdio.h>
#include<ctype.h>

#define SIZE 20

int is_in_s(char *, char);
// The following program returns whether a character you typed is found on "I love C"
int main(){
    char c;
    char string[20] = "I Love C";
    int i = 0;
    while(string[i] != '\0'){
	string[i] = toupper(string[i]);
	i++;
    }
    char *str = string;
    printf("Character: ");
    scanf("%c", &c);
    int checker = 0;
    while((*str != '\0') && !checker)
	if(is_in_s(str, toupper(c))){
	    printf("You love C, %c is in '%s.'\n", c, string);
	    checker = 1;
	    break;
	} else
	    str++;
    if(!checker)
	printf("I can't find %c. Don't you love C(-_-)\n",c);
}
    
int is_in_s(char *s, char c){
    while(*s){
	if(*s == c)
	    return 1;
	else
	    s++;
    }
    return 0;
}

