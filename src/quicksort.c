#include<stdio.h>
#include "../includes/sorting.h" // self defined collection of functions header file

int main(int argc, char ** argv){
    int num[] = {1,2,3,5,6,0,4,33,0,44,55,2,55,1234};
    int first_index = 0;
    int last_index = sizeof(num)/sizeof(num[0]) - 1;
    
    quick_sort(num,first_index,last_index);
    //printing the sorted numbers
    for(int i = 0; i <= last_index; i++)
	printf("%d%s",num[i],(i == last_index)?"\n":", ");
}

