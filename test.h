/*
Author: Isaiah Herrera
Class: HPC
Descritpion: This is the header file for the test. This file hs the test and some usefull functions
*Note*
There is a lot of redundancy in this file. I will try to make more robust in the future.
Test functions will return false if the statment is not true
*/

#include <stdio.h>


typedef int bool;
#define true 1
#define false 0



bool test_order(int array[],  int size){
	bool test = true;
	printf("Testing the order of the array: ");
	for(int i = 0; i< size - 1; i ++){
		if(array[i] > array[i + 1]){
			test = false;
		}
	}

	return test;
}

bool test_order_double(double array[], int size){
	bool test = true;
	printf("Testing the order of the array: ");
	for(int i = 0; i< size - 1; i ++){
		if(array[i] > array[i + 1]){
			test = false;
		}
	}

	return test;
}
bool test_order_float(float array[], int size){
	bool test = true;
	printf("Testing the order of the array: ");
	for(int i = 0; i< size - 1; i ++){
		if(array[i] > array[i + 1]){
			test = false;
		}
	}

	return test;
}

bool test_qsort(int array[], int qsort_array[], int size, size_t size_of){
	bool test = true;
	printf("Testing to see if the same as qsort: ");
	for(int i = 0; i< size; i++){
		if(array[i] != qsort_array[i]){
				test = false;
			}
		}
	return test;
}
bool test_qsortf(float array[], float qsort_array[], int size, size_t size_of){
	bool test = true;
	printf("Testing to see if the same as qsort: ");
	for(int i = 0; i< size; i++){
		if(array[i] != qsort_array[i]){
				test = false;
			}
		}
	return test;
}

void print_result(bool test){
	if(test == false){
		printf("Test Failed \n");
	}else{
		printf("Test Passed \n");
	}
}

void print_array(double array[], int size){
	for(int i = 0; i < size ; i++){
		printf(" %f ", array[i]);
	}

	printf("\n");
}

void print_array_int(int array[], int size){
	for(int i = 0; i < size ; i++){
		printf(" %d ", array[i]);
		}
	printf("\n");
}
double sum(double array[], int size){
	double sum = 0;	
	for(int i = 0; i <= size; i++){
		sum += array[i];
	}
	return sum;
}

bool sum_check(double sum1, double sum2){
	bool test;
	printf("Testing the summation is the same before and after: ");
	if(sum1 != sum2){
		test = false;
	}	
	return test;
}
