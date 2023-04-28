#include<stdio.h>

int main() {

	int x = 5;
	int* p = &x;

	printf("Value at x, before p dereferences it and change its value: %d\n", x);

	*p = 6;

	printf("Value at x, after p dereferences it and change its value: %d\n", x);


	// declaring a pointer to pointer
	int** q;
	q = &p; 
	
	// pointer to pointer that already points to some other pointer; 
	int*** r = &q;
	
	printf("Value at *p: %d\n", *p);
	
	printf("Value at &p: %d\n", &p);
	printf("Value at *q: %d\n", *q);
	printf("Value at q: %d\n", q);
	printf("\n\n The value that q stores is the address of p");
	printf("Value at r does the same thing: %d\n but for q", r);
	
	printf("Dereferencing r: %d\n", ***r);


	return 0;
}
