#include<stdio.h>
#include<stdint.h> // Standard library for integers

int main(){
    int32_t num = 5;
    printf("showing how uni negation works:%d\t\n", -num);
    printf("To stop the loop type 0.\n");

    for(;num; ){
	scanf("%d", &num);
	printf("%d|%6d\n",num,num*num);
    }
}
