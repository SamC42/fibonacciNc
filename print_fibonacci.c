
/**
	Class to handle the printing of Fibonacci's sequence
	Description: Program to generate the first n Fibonacci numbers F(n)
	printing:
		1. "Buzz" w/ F(n) is divisible by 3.
		2. "Fizz" w/ F(n) is divisible by 5.
		3. "FizzBuzz" w/ F(n) is divisible by 15.
		4. "BuzzFizz" w/ F(n) is prime.
		5. the value of F(n) otherwise..
	
	Date Created: 6/6/2017
	Author: Sam Cesario
*/

#include <stdio.h>
#include <stdlib.h>

int print_fib(int n){

	printf("Fibonacci Sequence Printing...\n");
	//auto variables
	int first=0, second=1, sum=0;

	printf("%i ", first);
	printf("%i ", second);

	for(int i=0; i<n;i++){
		first++;
		second++;
		sum = first + second;
		printf(" %i",sum);
	}
	printf("\n");
	return 1;
}


int main(int argc, char *argv[]){

	if(argv[0] == NULL){
		printf("Please provide one arguement\n");
	}
	else{
		// Convert String to long
		long input_n = strtol(argv[1], NULL, 10);
		print_fib(input_n);
	}

}
