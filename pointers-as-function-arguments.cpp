#include<stdio.h>

void incrementByOne(int* a){
	
	// everytime a function is called a stack frame is created for that function to run
	// in this particular case where I am using recursion, a lot of stack frames are created for this
	// one function
	
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
