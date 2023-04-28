#include<stdio.h>

void readingEveryElement(int a[]){
	
	// Using pointer arithmetic to dereference each address of the array; 
	printf("Value at a[0]: %d\n", *a);
	printf("Value at a[1]: %d\n", *(a + 1));
	printf("Value at a[2]: %d\n", *(a + 2));
	printf("Value at a[3]: %d\n", *(a + 3));
	printf("Value at a[4]: %d\n", *(a + 4));
		
}

void iteratingOverArray(int array[], int size){
	
	// size it's a pass by value;
	for(int i = 0; i < size; i++){
		printf("Value at a[%d]: %d\n", i, *(array + i));
	}
	
	printf("\n");
	
}


int main(){
	
	int numbers[5] = {1, 100, 4, 5, 10}; // 20 contiguous bytes are allocated in memory
	
	// the calculation of the size of an array is made by dividing all the bytes by the type of the array
	int numbersArraySize = sizeof(numbers) / sizeof(numbers[0]);
	
	// arrays are always passed by reference
	int* a = numbers;
	
	if(numbersArraySize == 5){
		readingEveryElement(numbers);
	}
	
	printf("\n\n\n");
	
	iteratingOverArray(numbers, numbersArraySize);
	
	return 0;
}