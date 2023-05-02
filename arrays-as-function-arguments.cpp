#include<stdio.h>

int sumOfElements(int*  array, int size){
				
	int result = 0; 
	for(int i = 0; i < size; i++){
		result = result + (*(array + i));
	}
	
	
	return result;
	
}

int main(){
	
	int array[] = {2, 3, 5, 5};
	int size = sizeof(array)/sizeof(array[0]);
	printf("The sum of elements in array is: %d\n", sumOfElements(array, size));
	
	return 0;
}