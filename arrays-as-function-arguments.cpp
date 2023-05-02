#include<stdio.h>

int sumOfElements(int array[]){
				// (int* array)
				
	int result = 0; 
	int size = sizeof(array)/sizeof(array[0]);
	for(int i = 0; i < size; i++){
		result = result + (*(array + i));
	}
	
	
	return result;
	
}

int main(){
	
	int a[] = {2, 3, 5, 5};
	printf("The sum of elements in array is: %d\n", sumOfElements(a));
	
	return 0;
}