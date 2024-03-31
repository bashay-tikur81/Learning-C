#include<stdio.h>
#include<string.h>

int main(int argc, char ** argv){
    char str[80];
    scanf("%s",str);
    printf("The length of the string is %ld\n",strlen(str));
    puts(str);
    return 0;
}
