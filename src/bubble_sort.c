#include<stdio.h>
#include "../includes/sorting.h" // this self defined collection of function header file


// This program is bubble sort
int main(){
    int array_num[] = {3,5,4,6,1,2};
    int len = sizeof(array_num) / sizeof(array_num[0]); // gets array length
    bubble_sort(array_num, len);

    // prints the sorted array
    for(int k = 0; k < len;k++)
	printf("%d%s", array_num[k],(k+1 == len) ? "" : ",");
    printf("\n"); 
}
