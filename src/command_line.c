#include<stdio.h>

int main(int argc, char *argv[]){
    
    // using array
    for(int i = 1; i < argc;i++)
	printf("%s%s",argv[i],(i < argc-1)?" " : "");
    printf("\n");

    //using pointers
    while(--argc > 0)
	printf((argc > 1)?"%s ":"%s",*++argv);
    printf("\n");
}
