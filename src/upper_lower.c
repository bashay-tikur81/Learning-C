#include<stdio.h>
#include<ctype.h>

int main(int argc, char ** argv){
    char c;
    for(int i = 0;(c = getchar()) != EOF; i++)
	if(*(argv[0] + i) >= 'Z'){
	    putchar(tolower(c));
	} else{
	    putchar(toupper(c));
    }
}
