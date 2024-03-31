#include<stdio.h>
#include<stdlib.h>

/* command line argument separators are either SPC or TAB
 commas, semi colon or period are not considered as separator. */
int main(int argc, char *argv[]){

    if(argc <= 1){
	printf("You forgot command line argument.\n");
	exit(1);
    }
    printf("You typed: %s\n", argv[1]);
    
}
