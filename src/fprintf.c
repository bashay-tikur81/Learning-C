#include<stdio.h>
#include<stdlib.h>


int main(int argc, char ** argv){

    FILE *fp;
    char str[80];
    int i;
    if((fp = fopen("TEST","w")) == NULL){
	printf("Can't open file\n");
	exit(1);
    }
    printf("Write a string and a number:\n");
    fscanf(stdin, "%s %d", str, &i); // read from keyboard
    fprintf(fp,"%s %d", str,i); // write to the file
    fclose(fp);

    if((fp = fopen("TEST", "r")) == NULL){
	printf("can't read file.\n");
	exit(1);
    }
    fscanf(fp, "%s %d", str, &i); // read from file
    fprintf(stdout, "%s %d", str, i); // write to screen(stdout)
    return 0;
}
