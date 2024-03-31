#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
    FILE *fp;
    char ch;
    // first check the file name
    // check if we can open it for read mode
    // finally prints its contents to the console
    if(argc != 2){
	printf("You miss file name.\n");
	exit(1);
    }
    if((fp = fopen(argv[1], "r")) == NULL){
	printf("Can't open file for read.\n");
	exit(1);
    }
    ch = getc(fp);
    while(ch != EOF){
	putchar(ch);
	//putc(ch,stout); // works same as above
	ch = getc(fp);
    }
    printf("\n"); // to make the shell run on a new line
    fclose(fp);
    return 0;

 }
