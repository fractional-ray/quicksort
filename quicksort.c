/*
Author: Isaiah Herrera
Class: HPC
Descritpion: This is the main method of the assignment
*/

#include <stdlib.h>
#include <stdio.h>
#include "quicksort.h"
#include <string.h>
#include "data_type.h" 

int main(int argc, char *argv[]){
	//Make needed variables
	int size;
	int value;
	size = atoi(argv[1]);
	srand(0);
	double double_arr[size];
	int *array = (int *) malloc((size ) * sizeof(int));
	float array_d[size];
	if(strcmp(argv[2],"int") == 0){
		//create random array
		int_array(size, array);
	
		//Run implementation
		quicksort(array, size , sizeof(int), compare);
		printf("After Qsort: \n");
		for(int i = 0; i < size; i++){
			printf("%d ", array[i]);
		}
	
	}else if(strcmp(argv[2], "float")== 0){
		
		//Create random array 
		float_array(size, array_d);
		
		//Create random array
		quicksort(array_d, size , sizeof(float), compare);
		printf("After Qsort: \n");
		for(int i = 0; i < size; i++){
			printf("%f ", array_d[i]);
		}

		}else if(strcmp(argv[2],"double") == 0){
			//create random array
			double_array(size,double_arr);

			//Run quicksort
			quicksort(double_arr, size, sizeof(double),compare_double);
			printf("After Qsort \n");
			for(int i = 0; i < size; i++){
				printf("%f ", double_arr[i]);
		
			}

		}else{
		printf("Please enter an appropiate perameter. Try agian. \n");
		}

	printf(" \n");


	return 0;
}
