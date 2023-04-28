#include<stdio.h>

int sumOfElements(int array[], int size){
	int result = 0; 
	
	for(int i = 0; i < size; i++){
		result = result + (*(array + i));
	}
	
	
	return result;
	
}

int main(){
	
	int a[] = {2, 3, 5, 5};
	int sizeOfA = sizeof(a)/sizeof(a[0]);
	printf("The sum of elements in array is: %d\n", sumOfElements(a, sizeOfA));
	
	return 0;
}