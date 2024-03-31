#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char **argv){
    char str[80];

    if(argc != 2){
	printf("Usage: xerase <file name>\n");
	exit(1);
    }
    printf("Erase %s? (Y/N)",argv[1]);
    //gets(str);
    scanf("%c",str);

    if(toupper(*str) == 'Y')
	if(remove(argv[1])){
	    printf("Can't erase file.\n");
	    exit(1);
	}
    return 0;
}
