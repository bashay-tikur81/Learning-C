#include<stdio.h>

int main(int argc, char **argv){
    // illustrating array of character pointer

    char *array_char[5] = {"My ", "Name ", "Is", "C ","!"};
    int count = 0 ;
    while(count < 5){
	// accessing individual character of array of character pointers.
	printf("%c\n",*(array_char[count]+0)); // accessing the zeroxth element
	count++;

    }
    


}
