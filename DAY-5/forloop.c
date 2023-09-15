#include <stdio.h>

int main()
{
	for (int i = 50; i > 40; i--); {
		printf("SEE HOW FAR\n");
	}
	return (0);
	//NOTE THAT WHEN YOU PUT THE SEMICOLON(;) AFTER 'i--' it ceases to function and the compiler brings an error but after you put the semicolon after the closing bracket of for, the code functions but not as intended to, investigate why.
}
