/*
Author: Isaiah Herrera
Class: HPC
Descritpion: This is a header file to create random arrays of different types
*/



void int_array(int size, int array[]){
	array[size];
	for(int i = 0; i < size; i++){
		array[i] = rand()%20;
	}
	printf("Before quick sort the array is \n");
	for(int i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	printf("\n");
}

void float_array(int size, float array[]){
	float *p=(float* )malloc(sizeof(float)*size);
	array[size];
	for(int i = 0; i < size; i++){
		array[i] = (float)rand()/RAND_MAX;
	}
	p = array;
	printf("Before quick sort the array is \n");
	for(int i = 0; i < size; i++){
		printf("%f ", array[i]);
	}
	printf("\n");

}

void double_array(int size, double array[]){
	array[size];
	for(int i = 0; i < size; i++){
		array[i] = (double)rand();
	}
	printf("Before quick sort the array is \n");
	for(int i = 0; i < size; i++){
		printf("%f ", array[i]);
	}
	printf("\n");
}


