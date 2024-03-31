#include<stdio.h>
#include<string.h>

int main(int argc, char **argv){
    //checking how the strstr standard library works.
    int state = 1;
    if(argc == 3){
	while(state)
	    if(strstr(argv[1],argv[2])){
		printf("%s is in the string.\n",strstr(argv[1],argv[2]));
		state = 0;
	    }
	    else{
		printf("Not found, try again!\n");
		scanf("%s", argv[1]);
		scanf("%s", argv[2]);
	    }
    }
    else
	printf("Incorrect number of  command line arguments.\n");


    

}
