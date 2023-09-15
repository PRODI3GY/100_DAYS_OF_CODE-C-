#include <stdio.h>

int main()
{
	int normal = 54;
	switch (normal) 
	{
		case 34:
		printf("This is not 54\n");
		break;
		case 44:
		printf("This is not 54\n");
		break;
		case 54:
		printf("This is indeed 54\n");
		break;
		case 64:
		printf("This is not 54\n");
		break;
		case 74:
		printf("This is not 54\n");
		break;
		default:
		printf("Nothing is 54");
	}

	return 0;
}
