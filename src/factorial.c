#include<stdio.h>

long factorial_l(long);
long factorial_r(long);

int main(int argc, char **argv){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d! using loop = %ld\n",num,factorial_l(num));
    printf("%d! using recursion = %ld\n",num,factorial_r(num));
    
}

long factorial_l(long f){
    long fact = f;
    if(f <= 0)
	return 1;
    while(--f)
	fact*=f;
    return fact;
}
long factorial_r(long f){
    if(f <= 0)
	return 1;
    else
	return f*factorial_r(f-1);
}
