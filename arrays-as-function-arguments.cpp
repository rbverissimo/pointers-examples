#include<stdio.h>

int sumOfElements(int*  array, int size){
				
	int result = 0; 
	for(int i = 0; i < size; i++){
		result = result + (*(array + i));
	}
	
	
	return result;
	
}

void Double(int* array, int size){
	for(int i = 0; i < size; i++){
		array[i] = 2 * (*(array + i));
	}
}

void printElementsArray(int* array, int size){
	for(int i = 0; i < size; i++){
		printf("Element at index %d value: %d\n", i, *(array + i));
	}
}

int main(){
	
	int array[] = {2, 3, 5, 5};
	int size = sizeof(array)/sizeof(array[0]);
	printf("The sum of elements in array is: %d\n", sumOfElements(&array[0], size));
	// &array[0] means I'm passing the first address of the array to a function
	// I can double the value of all elements in the array by passing it by reference: 
	Double(&array[0], size);
	printElementsArray(&array[0], size);
	
	
	
	return 0;
}