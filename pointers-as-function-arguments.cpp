#include<stdio.h>

void incrementByOne(int* a){
	
	*a = (*a) + 1;
	printf("Address of variable a inside main: %d\n", a);
	
	if((*a) < 30 ){
		printf("Value of a: %d\n", *a);
		incrementByOne(a);
		
	}
	
}

int main(){
	
	int a = 10;
	int* p = &a; 
	incrementByOne(p);
	printf("Address of variable a inside main: %d\n", &a);
	
	printf("Value of a, after increment: %d\n", a);
	
	return 0;
}
