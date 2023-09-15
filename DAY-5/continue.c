#include <stdio.h>

int main()
{

	for (int i = 50; i < 60; i++) {
		if (i == 55)
		{
		continue;
		}
	      printf(":%d", i);

	}	
	return 0;
	/* Note that without the continue keyword the program would print all numbers from 50 to 59 but because continue is used it prints 50 to 59 but omitting the number 55 because the keyword continue skips one loop iteration.
	 */
}
