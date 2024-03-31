#include<stdio.h>
#include<stdlib.h>

long fibonacci_r(int);
long fibonacci_l(int *,int);

int main(int argc, char **argv){
    int num, i = 0;
    int *fibmem;

    printf("Please enter a positive Integer: ");
    scanf("%d",&num);
    fibmem = (int *)(malloc(num*sizeof(num)));

    fibonacci_l(fibmem,num);
    
    printf("Fibonacci Series up to %d are:\n",num);
    /* while(i <= num){ */
    /* 	printf("%ld%s",fibonacci_r(i),(i == num)?"\n":", "); */
    /* 	i++; */

    /* } */
    while(i <= num){
	printf("%ld%s",fibonacci_l(fibmem,i),(i == num)?"\n":", ");
	i++;

    }
    free(fibmem);
    fibmem = NULL;
}

long fibonacci_r(int f){
    if(f <= 1)
	return f;
    else
	return (fibonacci_r(f-2) + fibonacci_r(f-1));
	
}
long fibonacci_l(int *f, int num){
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i < num;i++)
	f[i] += f[i-1] + f[i-2];
    return f[num];
}
