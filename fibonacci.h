#include <stdio.h>

int fibonacci(int x) {

	if (x == 2 || x == 1) {return 1;}
	else {return fibonacci(x-2) + fibonacci(x-1);}
}