#include<stdio.h>
#include<ctype.h>
#include<string.h>

/* list of words and their definitions */

char *dic[][40] = {
    "C", "Best programming language.",
    "love", "affection, desire.",
    "programming", "the art of thinking."
    "," // terminate the list
};
int main(void){
    char word[80], ch;
    char **p;
    do{

	puts("Enter a word: ");
	scanf("%s",word);
	p = (char**)dic;
	/* Find matching word and its meaning */
	do {
	    if (!strcmp(*p, word)){
		puts("Meaning:");
		puts(*(p+1));
		break;
	    }
	    if(!strcmp(*p,word))
		break;
	    p = p + 2; // advance through the list
	} while(*p);
	if(!*p) puts("Word not in dictionary");
	printf("Another (y/n): ");
	scanf("%c %*c", &ch);
    } while(toupper(ch)!= 'N');

    return 0;
}
    
