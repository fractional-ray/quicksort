/*
Author: Isaiah Herrera
Class: HPC
Descritpion: This is the p1 of the test. I assume that qsort is available to me and I use it to compare my function.
*/

#include <stdlib.h>
#include <stdio.h>
#include "quicksort.h"
#include <string.h>
#include "data_type.h" 
#include "test.h"

typedef int bool;
#define true 1
#define false 0


int main(int argc, char *argv[]){
	//Create need variables
	int size;
	int value;
	bool order_int= true;
	bool order_double = true;
	bool same_as_qf = true;
	bool order_float = true;
	bool same_as_q = true;
	size = atoi(argv[1]);
	srand(0);
	double double_arr[size], copy_double[size];
	int *array = (int *) malloc((size ) * sizeof(int));
	int copy_int[size];
	float array_f[size], copy_float[size];
	
	//If the value is int
	if(strcmp(argv[2],"int") == 0){

		//Copy array for qsort
		int_array(size, array);
		for(int i = 0; i <= size; i++){
			copy_int[i] = array[i];
		}
		//Run my implementation
		quicksort(array, size , sizeof(int), compare);

		//Run qsort
		qsort(copy_int,size, sizeof(int),compare);
		printf("After quicksort: \n");
		for(int i = 0; i < size; i++){
			printf("%d ", array[i]);
		}
		//test
		printf("\n");
		same_as_q = test_qsort(array, copy_int, size,sizeof(int));
		print_result(same_as_q);
		order_double = test_order(array, size);
		print_result(order_double);
	
	}else if(strcmp(argv[2], "float")== 0){
		//Copy array for qsort
		float_array(size, array_f);
		for(int i = 0; i <= size; i++){
			copy_float[i] = array_f[i];
		}
		//Run my implemenation of quicksort
		quicksort(array_f, size , sizeof(float), compare);
		
		//Run qsort
		qsort(copy_float,size,sizeof(float),compare);
		printf("After quicksort: \n");
		for(int i = 0; i < size; i++){
			printf("%f ", array_f[i]);
		}	
			printf("\n");
			//test
			same_as_qf = test_qsortf(array_f,copy_float,size,sizeof(float));
			print_result(same_as_qf);
			order_float = test_order_float(array_f,size);
			print_result(order_float);
		}else if(strcmp(argv[2],"double") == 0){
			double_array(size,double_arr);
			printf("After quicksort: \n");
			quicksort(double_arr, size, sizeof(double),compare_double);
			
			for(int i = 0; i < size; i++){
				printf("%f ", double_arr[i]);
		
			}

		}else{
		printf("Please enter an appropiate perameter. Try agian. \n");
		}

	printf(" \n");

}
