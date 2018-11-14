/*
Author: Isaiah Herrera
Class: HPC
Descritpiton: This is a header file to impliment the algorithm quick sort it has the following fucntions:
	swap - swap values in array 
	partition - partition the array 
	quicksort - The start of the quick sort algorithm
	compare - The compare algorithim will compare to values and return the value
*/

#include <string.h>

/*
This function will compare the values and return a positive number or a negative value 
*/


int compare(const void * a, const void * b){
	return(*(int*)a - *(int*)b);
}

int compare_double(const void * a, const void * b){
	if(*(double*)a - *(double*)b > 0.0){
		return 1;
	}
		
	if(*(double*)a - *(double*)b < 0.0){
		return -1;
	}
	if(*(double*)a - *(double*)b == 0.0){
		return 0;
	}
}

/*
This function will swap the two values in a the array when called
*/
static void swap(void *a, void * b, size_t size_of){
	char *tmp = (char *)malloc(sizeof(char) * size_of);
	memcpy(tmp,a,size_of);
	memcpy(a,b,size_of);
	memcpy(b,tmp,size_of);
	free(tmp);
}


/*
This function will compare the pivot (far most) and the first element in the array then we increment up and comapre.
If the number in question is less then the pivot their will be no need to swap but if the number in question is larger than the pivot we swap the number in position before the pivot and then swap those as well.
*/

static void partition(void* array,int low, int high,int (*comp)(const void*,const void*), size_t size_of){
	if(low < high){
		void *pivot = array + size_of*(high - 1);
		int l =low;
		int r = (high - 1);
		int value;
		while(l < r){
			value = comp((array + size_of*l), pivot);
			if(value <= 0){
				l ++;
			}else if(value > 0){
				r--;
				swap( (array + size_of*l), (pivot - size_of*1), size_of);
				swap( (pivot), (pivot - size_of*1), size_of);
				pivot = array + (size_of*r);
				}
			}
		// partition down the left side of the array
		partition(array, 0, l , comp,size_of);
	
		// Partition down the right side of the array
		partition(array, r  + 1, high , comp, size_of);

	

	}

}



void quicksort(void* base, size_t num, size_t size, int (*compare)(const void*,const void*)){

	// This is to start the quicksort
	partition(base,0,num,compare,size);

}


