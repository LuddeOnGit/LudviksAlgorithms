// Kadane's Algorithm, O(n)
#include <iostream>

using namespace std;

int main()
{

	int array[] = {-2,2,5,-11,6};
	int max_sum = array[0];
	int current_sum = array[0];
	int size_of_array = sizeof(array)/sizeof(array[0]);

	for(int i = 1; i < size_of_array; i++)
	{
		current_sum += array[i];
		if(array[i] > current_sum){current_sum = array[i];}
		if(max_sum < current_sum){max_sum = current_sum;}
	
	}

	cout << max_sum << endl;

	return 0;

}
