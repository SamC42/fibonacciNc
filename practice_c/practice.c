/*
Practicing C 

Notes: 
When used for declaration, a star indicates a pointer
When not used for declaration, a star indicates the value of a pointer

Char is just a smaller integer type
int is just a larger character type
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
// 5/12/2017
// Declaring Pointers
void testPointers(void){
	
	
	//Example 1 - Copies address of testVal into p1 so that you can get to the value via *p1 
	int i = 13;
	printf(" I: %i (value)\n",i );
	printf(" &I: %i (address)\n",&i );
	int *j = &i; // j is a declaration, so a pointer, address of i stored in j, value of i stored in *j
	//int j = &i; // Returns an error since j is an int and &i is an address (pointer)
	printf("*j: %i (value)\n",*j ); //should print out the value of i (star indicates value of pointer)
	printf(" j: %i (address)\n",j ); //should print out the address of i

	int *k = j;  // k is a declaration, so a pointer, copies address of j into a pointer k
	printf("*k: %i (value)\n",*k ); // should print out value of *k which is j which is 13
	*j = 12;     // j is not a declaration so a value (i.e. a value can be assigned)
	printf("*j: %i (value)\n", *j); // should print out value since not in declaration
	
	int firstvalue, secondvalue;
	int * mypointer;

	mypointer = &firstvalue; // Sets mypointer to the address firstValue, now by manipulating mypointer we can change firstValue's value
	printf("mypointer: %i\n",mypointer);
	*mypointer = 10; // Sets the value of mypointer to 10 (my pointer points to firstValue so in effect we are changing firstvalue)
	mypointer = &secondvalue; // We can now re use mypointer and set it to another address
	*mypointer = 20;
	std::cout << "firstvalue is " << firstvalue << '\n';
	std::cout << "secondvalue is " << secondvalue << '\n';
}

// Test Arrays, Strings and Pointers
void testASP(void){
	//Array Test
	int array[] = {00,11,22,33}; // Pointer declaration so *array is a pointer
	printf("Array: %i\n", array[1]); // Returns the value at array[1]

	//String Test
	// Strings are array of characters
	char nameStr[5]; //
	int i;
	nameStr[0] = 's'; //Can only have one char in each 
	printf("Name Str at 0: %c\n",nameStr[0] );

	//Pointers
	char *ptr, c='a', s[2];
	ptr = &c; // assign the address of c to ptr so ptr-> 'a'
	printf("Pointer C: %c (value)\n",*ptr ); //Pointer not used in dec so value
	strcpy(s,"ABCD");
	printf("S String: %s\n", s); //Should Print out all chars as a string
	printf("S Char 1: %c\n", s[0]); //Prints out the first element
}

// Test Function to read files
void write2File(void){
	int c;
	FILE *ifp;
	ifp = fopen("test_file", "w");
	fputs("This is written into test_file",ifp);
	fclose(ifp);

}

void readFile(char *oFile){
	int c;
	FILE *ifp = fopen(oFile,"r");
	while((c = getc(ifp)) != EOF){
		
		printf("%c", c);
	}
	printf("\n");
}

void dataTypes(){

	// Char is stored as a int
	// char datatype is 1 byte, 8 bits = 2^8 = 256
	char c = 'a';
	printf("C as a char: %c\n",c ); // a is printed
	printf("C as a  int: %d\n",c ); //97 is printed
	char hexi = '\n';
	printf("Return: %c...\n",hexi ); //Prints a new line: \n

	int i = 1000; // integers are stored in 4 bits on this machine
	printf("I is stored in: %lu bits, on this machine\n", sizeof(i));

	//Floating Type
	//  double stored in 8 bits
	double d = 1000.55; // integers are stored in 8 bits on this machine
	printf("D is stored in: %lu bits, on this machine\n", sizeof(d));

	//typedef
	typedef char uppercase;
	uppercase u = 'A';
	printf("Uppercase Char: %c \n", u);

}

void gnpChar(){
	int c;

	while((c=getchar()) != EOF){
		putchar(c);
	}
}

int main(int argc, char *argv[]){

	// This should print out the value of argv
	//printf("Argv[0]: %s\n",argv[0] ); // Prints out the value of argv, so the full string
	//printf("Argv[0] (with *): %c\n",*argv[0]); // Argv is array of char string, so ptr argv is first char 

	testPointers();
	//morePointers();
	//testASP();
	//write2File();
	//readFile(argv[1]);
	//dataTypes();
	//gnpChar();
}

