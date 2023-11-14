#include <stdio.h>

int taking_array_as_argument(int array[], int size);

int main()
{
	int costs[5]={9,8,7,6,5}; 
	taking_array_as_argument(costs,5);

	return 0;
}

int taking_array_as_argument(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d\n", array[i]);
	} 
}
