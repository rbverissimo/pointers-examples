#include<stdio.h>

int main(){
	
	int a = 1025; // 1025 = 00000000 00000000 00000100 00000001
	int *p = &a;
	
	printf("Size of integer is %d\n", sizeof(int));
	printf("Address that p stores = %d, value that p dereferences = %d\n", p, *p);
	printf("Address that p stores + 1 = %d. value that p dereferences = %d\n", p+1, *(p+1));
	
	/* tricking the compiler into accepting that i can assign an int type pointer to a char one */
	char *p0 = (char* )p; 
	
	printf("Size of char is %d bytes \n", sizeof(char));
	printf("Address that p0 stores: %d, value that p0 dereferences = %d\n", p0, *p0);
	printf("Address that p stores + 1 = %d. value that p dereferences = %d\n", p0+1, *(p0+1));
	
	
	/* Void pointer - generic pointer: it can't be dereferenced */
	void *p1; 
	p1 = p; // valid;
	printf("\n\n\n\t\t*****Void Pointers*****\n\n");
	printf("Address of the p pointer = %d\n", &p);
	printf("Address that p1 stores = %d, a void pointer can't be dereferenced", p1);
	
	
	
	
	return 0;
}
