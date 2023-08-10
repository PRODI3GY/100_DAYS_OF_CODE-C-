#include <stdio.h>

int main()
{
	printf("Integer                - %d\n",2147483647);
	printf("Short Int              - %d\n",32767);
	printf("Unsigned Short Int     - %d\n",65535);
	printf("Unsigned Int           - %u\n",(unsigned int)4294967295);
	printf("Long long Int          - %lld\n",(long long int)9223372036854775807);
	printf("Long long Unsigned Int - %llu\n",(unsigned long long)18446744073709551615UL);
	printf("Float                  - %f\n",3.141592);
	printf("Double                 - %lf\n",3.141592653589793);
	printf("Character              - %c\n",'c');
	return 0;
}
