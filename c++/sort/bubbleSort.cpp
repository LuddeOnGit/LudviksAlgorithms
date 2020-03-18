//Bubble Sort, O(n²)
#include <iostream>
using namespace std;

int main(){
	int array[] = {9,8,7,6,5,4,3,2,1};
	int length = sizeof(array)/sizeof(array[0]);
	for(int i=0; i<length; i++){
		for(int j=i+1; j<length; j++){
			if(array[j]<array[i]){
				swap(array[j], array[i]);
			}
		}
	}
	for(int k=0; k<length; k++){
		cout << array[k] << endl;
	}
}
