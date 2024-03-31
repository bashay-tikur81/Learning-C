#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
	int a[] = {-32,3,45,-8};
	qsort(a,4,4);
	for(int i = 0; i< 4;i++)
		printf("%d",a[i]);
}
