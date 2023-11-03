#include <stdio.h>

int main(void)
{
	int array_as_argument(int array[])
	{
		int size_of_array = sizeof((int)array) / sizeof(int);

		for(int i = 0; i <= size_of_array; i++)
		{
			printf("%d\n", array[i]);
		}
	}

	int luck[]={1,2,3,4,5};
	array_as_argument(luck);

	return 0;
}
