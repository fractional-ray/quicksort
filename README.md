### Introduction
This program will run the quick sort algorithm in c. The three datatypes that have been tested are int, floats and doubles.

Ints - Are values 0<= ints < 20 - I did this for readablilty of the output
Floats - Are values 0.0 < floats < 1 - I did this for readability of the output
Doubles - Are just random values of doubles.

### Build
To build and run this program you will need to run the following commands:

1. make - build the program 
2. sh run.sh - This will only run a double and int once (SMALL VALUES OF N)
or

3. ./qsort n <int,floats or doubles> Where n is the number of elements


Testing will be in two parts. Part one will assume that I have qsort to test my implementation against. The second part will assume that I do not have quick sort so I have tested the order and the summation to make sure that I did not currupt my array after quicksort.

### Testing
Testing functions will return a bool of false if the test does not hold. Assume true until proven guilty.

The test.sh shell script will run both parts of the test for ints and floats. The first part I make random arrays of different sizes. I test for order and against qsort: 

1. Make a 40 random array of ints 
2. Make a 60 random array of ints 
3. Make a 30 random array of floats 
4. Make a 40 random array of floats

*Note part two is tested on one data type*

Part two of the test will assume that I do not have qsort to test. I test the summation of array before my implementation and after to check for corruption of the array. I also test the order of the array:
 
5. Decreasing array of doubles - odd size
6. Same value of doubles - even size
7. Same values but one in the middle of doubles - odd size
8. Increasing array of doubles - odd size
9. Same values of doubles - odd size 

The shell script test.sh will run part 1 and part 2 of the tests, use command:

1. make
2. sh test.sh

### NOTES
Notes on the files:

	1. data_type.h  This will create a random array of a given datatype.
	2. quicksort.h - This is the implemenation of quicksort
	3. quicksort.c - This is the main method of the program quick sort
	4. test.h - This is a header file with all of the test that are implemented and other functions such as print statements that I use for readability
	5. test_p1.c - This is the test main method for part1
	6. test_p2.c - This is the main method for part2
	7. test.sh - This is a shell script of the test that will run both parts of the test
	8. Makefile - This will build the program

### Contribute
If you see a better solution please fork and then request a pull request. 
