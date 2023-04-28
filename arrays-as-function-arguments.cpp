#include<stdio.h>

int sumOfElements(int array[]){
	int result = 0; 
	
	int size = sizeof(array) / sizeof(array[0]);
	
	for(int i = 0; i < size; i++){
		result = result + (*(array + i));
	}
	
	
	return result;
	
}

int main(){
	
	return 0;
}