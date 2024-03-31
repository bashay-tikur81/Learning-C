// these are a set of functions definitions to be used in another file
#include "../includes/sorting.h"

int quick_partition(int sorted[],int start, int end){
    int pivot = sorted[end];
    int i = start-1;
    int j = start;
    for(;j<= end;j++)
	if(sorted[j] < pivot){
    	    ++i;
	    swap(&sorted[i],&sorted[j]);
	}
    swap(&sorted[i+1],&sorted[j-1]);
    return (i+1); // returning the new index
}

void quick_sort(int sorted[], int start, int end){
    if(start < end){
	int q = quick_partition(sorted, start, end);
	quick_sort(sorted,start,q-1);
	quick_sort(sorted, q+1, end);
    }
}

// swap values
void swap(int *i, int *j){
    int temp = *i;
    *i = *j;
    *j = temp;
 }


void bubble_sort(int *sorted, int len){
    for (int i = 0; i < len; i++)
	for(int j = 0; j < len-i-1; j++)
	    if (sorted[j] > sorted[j+1]){
		int temp = sorted[j];
		sorted[j] = sorted[j+1];
		sorted[j+1] = temp;
	    }
}
