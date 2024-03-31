#include<stdio.h>

void filecopy(FILE *, FILE *);

int main(int argc, char **argv){
    FILE *fp;
    fp = fopen(argv[1], "r");
    if(argc == 1)
	filecopy(stdin,stdout);
    else{
	if((fp = fopen(*++argv,"r")) != NULL){
	    filecopy(fp,stdout);
	    fclose(fp);
	}

    }
}
void filecopy(FILE *ifp, FILE *ofp){
    char c;
    while((c = getc(ifp)) != EOF)
	putc(c,ofp);
}
