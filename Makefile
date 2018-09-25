all: quicksort test_p1 test_p2

quicksort: quicksort.c
	gcc -o qsort quicksort.c

test_p1: test_p1.c
	gcc -o test_p1 test_p1.c

test_p2: test_p2.c
	gcc -o test_p2 test_p2.c



