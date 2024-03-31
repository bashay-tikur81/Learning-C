#include<stdio.h>
#include<stdlib.h>

int main(int argc, char ** argv){
    FILE *fp;
    char ch;


    if(argc != 2){
	printf("You forget to type file name.\n");
	exit(1);
    }
    if((fp = fopen(argv[1], "w")) == NULL){
	printf("Can't open the file");
	exit(1);
    }
    //read from console and write it to the file
    do{
	ch = getchar();
	putc(ch,fp);
    }while(ch != '$');
    fclose(fp);
    return 0;
}
