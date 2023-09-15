#include <stdio.h>

int main()
{

	for (int i = 50; i < 60; i++) {
		if (i == 55)
		{
		    break;
		}
		printf("%d\n", i);
		
	}	
	return 0;
	/* Note that without the break keyword the program would print numbers 50 to 59 but because break is used it only prints 51 to 54 because the condition set is once the loop reaches 55 the break keyword is used and it breaks out of the loop.
	 */
}
