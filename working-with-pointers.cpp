#include<stdio.h>

int main(){
	
	/* Working with pointers */
	char a;
	char *p; 
	a = 'a';
	// p = a throws a compilation error because of the type, p is a pointer to a char not a char; 
	p = &a; 
	printf("%d\n", p);
	printf("Some char value: %c\n", *p);
	
	/* Dereferencing */
	*p = 'b';
	
	printf("A new value of a: %c\n", a);
	
	char x = 'x';
	
	*p = x; /* the derefercing will change the value of a, it will take b */
	printf("A new value of a after assign it to x: %c\n", a);
	
	
	/* pointer arithmetic */
	printf("Address of a: %d\n", &a);
	printf("Address of p: %d\n", p);
	printf("Address of p+1: %d\n", p+1);
	
	if(&a+1 == p+1){
		printf("You are right!!!");
	}
	 
	
	
	
	return 0;
}
