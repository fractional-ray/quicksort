/*
Author: Isaiah Herrera
Class: HPC
Descritpion: This is the p2 of the test. I assume that qsort is NOT available to me and I make sure that it is in order and the summation before and after are the same.
*/

#include <stdlib.h>
#include <stdio.h>
#include "quicksort.h"
#include <time.h>
#include <string.h>
#include "data_type.h"
#include "test.h"


int main(){
	//Create needed variables
	int sum_before=0;
	int sum_after=0;
	bool sum_bool = true;
	bool dec_d = true;
	bool same_even_d = true;
	bool same_but_one_d = true;
	bool increase_d = true;
	bool same_odd_d = true;
	int same_odd[] = {5,5,5,5,5};
	int same_even[] = {5,5,5,5};
	int increse[] = {1,2,3,4,5};
	int decrease[] = {5,4,3,2,1};
	double same_odd_double[] = {30.0,30.0,30.0,30.0,30.0};
	double same_even_double[] = {5.0,5.0,5.0,5.0};
	double decrease_double[] = {70.0,11.0,3.0,2.0,0.6};
	double increase_double[] = {1.0,2.0,3.0,4.0,60.0};
	double same_but_one[] = {5.0,5.0,400.0,5.0,5.0};
	double even_double[4];
	
	
	//Test the decreasing array for doubles
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
	printf("Before quicksort: \n");
	print_array(decrease_double,5);
	sum_before = sum(decrease_double,5);
	quicksort(decrease_double,5,sizeof(double),compare_double);
	sum_after = sum(decrease_double,5);
	printf("After quicksort: \n"); 
	print_array(decrease_double,5);
	dec_d = test_order_double(decrease_double,5);
	print_result(dec_d);
	sum_bool = sum_check(sum_before,sum_after);
	print_result(sum_bool);
	sum_bool = true;
	sum_before = 0;
	sum_after = 0;	
	
	//Test the same valued array in doubles
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
	printf("Before quicksort: \n");
	print_array(same_even_double,4);
	sum_before = sum(same_even_double,5);
	quicksort(same_even_double,4,sizeof(double),compare_double);
	sum_after = sum(same_even_double,5);
	printf("After quicksort: \n"); 
	print_array(same_even_double,4);
	same_even_d = test_order_double(same_even_double,4);
	print_result(same_even_d);
	sum_bool = sum_check(sum_before,sum_after);
	print_result(sum_bool);
	sum_bool = true;
	sum_before = 0;
	sum_after = 0;	

	
	//Test the same valued but the middle value
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
	printf("Before quicksort: \n");
	print_array(same_but_one,5);
	sum_before = sum(same_but_one,5);
	quicksort(same_but_one,5,sizeof(double),compare_double);
	printf("After quicksort: \n"); 
	sum_after = sum(same_but_one,5);
	print_array(same_but_one,5);
	same_but_one_d = test_order_double(same_but_one,4);
	print_result(same_but_one_d);	
	sum_bool = sum_check(sum_before,sum_after);
	print_result(sum_bool);
	sum_bool = true;
	sum_before = 0;
	sum_after = 0;	

	//Testing increasing double array
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
	printf("Before quicksort: \n");
	print_array(increase_double,5);
	sum_before = sum(increase_double,5);
	quicksort(increase_double,5,sizeof(double),compare_double);
	sum_after = sum(increase_double,5);
	printf("After quicksort: \n"); 
	print_array(increase_double,5);
	increase_d = test_order_double(increase_double,4);
	print_result(increase_d);	
	sum_bool = sum_check(sum_before,sum_after);
	print_result(sum_bool);
	sum_bool = true;
	sum_before = 0;
	sum_after = 0;	

	//Testing same but odd size of an array
	printf("--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- \n");
	printf("Before quicksort: \n");
	print_array(same_odd_double,5);
	sum_before = sum(same_odd_double,5);
	quicksort(same_odd_double,5,sizeof(double),compare_double);
	sum_after = sum(same_odd_double,5);
	printf("After quicksort: \n"); 
	print_array(same_odd_double,5);
	same_odd_d = test_order_double(same_odd_double,5);
	print_result(same_but_one_d);	
	sum_bool = sum_check(sum_before,sum_after);
	print_result(sum_bool);
	sum_bool = true;
	sum_before = 0;
	sum_after = 0;	


	return 0;
}
