#include <stdio.h>

int main()
{
	int random = 54;

	switch (random) {
		case 10:
		printf("This is indeed not 54\n");
		case 20:
		printf("This is indeed not 54\n");
		case 54:
		printf("This is indeed 54\n");
		case 14:
		printf("This is indeed not 54\n");
		case 15:
		printf("This is indeed not 54\n");

	}
	return 0;
}
