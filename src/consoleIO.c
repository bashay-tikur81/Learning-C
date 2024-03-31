#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(int argc, char **argv){

    // writes the character typed from keyboard to console
    char c;
    ++argv;
    printf("%s",(argc-1)?"From CLI...\n":"Write a text and to end the text type \'.\'\n");
    if(argc == 1 ){
	do {
	    c = getch();
	    if(islower(c)) c = toupper(c);
	    else c = tolower(c);
	    putchar(c);
	}while(c != '.');
    }else{
	int i = 0;
	do{
	    c = (*argv)[i];
	    if(islower(c)) c = toupper(c);
	    else c = tolower(c);
	    putchar(c);
	    i++;
	}while((*argv)[i]);

    }
    printf("\n");
}
