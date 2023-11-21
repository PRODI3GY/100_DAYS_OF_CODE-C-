#include <stdio.h>

int main()
{
	int numbers_array[5];
	int i = 0;
	int storage;

	printf("Please enter upto 5 numbers of your choice.\n(Use a space after entering one number then use enter when you have finished):  \n");

	while(scanf("%d", &storage) == 1 )
	{
		if(i >= 5)
		{
			printf("You broke the law, you cannot write more than 5 numbers");
			break;
		}
		numbers_array[i] = storage;
		i++;
		break;
	}

	printf("Thank You for participating !, Your numbers are:\n");

	for(int j = 0; j <= i; j++)
	{
		printf("%d\n",numbers_array[j]);
	}

	return 0;
}

//I know there are better ways to achieve this but I was limited to using only printf
