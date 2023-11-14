#include <stdio.h>

void reverse_function(int array[], int size);

int main(void)
{
	int numbers[]={0,1,2,3,4,5};
	int y = sizeof(numbers) / sizeof(int);
	reverse_function(numbers,y);
	return 0;
}

void reverse_function(int array[], int size)
{
	for (int i = size - 1; i >= 0; i--)
	{
		printf("%d\n",array[i]);
	}
}
