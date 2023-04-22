#include<stdio.h>


int main(){
	
	/* Understanding basics of pointers*/
	int a = 10;
	printf("Address of a: %d\n", &a); 
	
	int *ptr;
	ptr = &a;
	printf("Value of ptr is the addres of a : %d\n", ptr); 
	printf("The pointer won't access the value 10 directly because it stores the address of the variable a  \n\n\n\n"); 
	printf("Using & we access the address of the ptr, just like in any other variable: %d\n", &ptr);
	printf("The line above shows that the address of the ptr pointer is different from the address of variable a \n\n\n\n");
	printf("Address of a: %d\n", &a);
	
	printf("Value of a using the * sign in front of ptr: %d\n", *ptr);
	printf("The concept above is called dereferencing");
	
	
	return 0; 
}
