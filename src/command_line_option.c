#include<stdio.h>

int main(int argc, char **argv){
    int c, except = 0, number = 0, found = 0;
    while(--argc > 0 && (*++argv)[0] == '-')
	while(c = *++argv[0])
	    switch(c){
	    case 'x':
		except = 1;
		break;
	    case 'n':
		number = 1;
		break;
	    default:
		printf("find: illegal option %c", c);
		argc = 0;
		found = -1;
		break;
	    }
}
