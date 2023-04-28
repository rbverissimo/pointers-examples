#include<stdio.h>

void incrementByOne(int a){
	
	a++;
	printf("Address of variable a inside main: %d\n", &a);
	
}

int main(){
	
	int a = 10;
	incrementByOne(a);
	printf("Address of variable a inside main: %d\n", &a);
	
	return 0;
}
