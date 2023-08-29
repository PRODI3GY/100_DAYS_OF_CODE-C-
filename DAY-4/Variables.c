#include <stdio.h>

int main() 
{
       	short int shortint = 32767;
	unsigned short int unsignedshortint = 65535;
	unsigned int unsignedint = 4294697295;
	int integer = 2147483647;
	unsigned long long int unsignedlonglongint  = 18446744073709551615ULL;
	long long int longlongint = 9223372036854775807;
	float floatVar= 3.141592;
	double doubleVar = 3.141592653589793D;
	long double longdoubleVar =3.141592653589793238462 ;
	char charVar = 'L';

	printf("Short Int: %hd\n", shortint);
	printf("Unsigned Short Int: %hu\n",unsignedshortint);
	printf("Unsigned Int: %u\n", unsignedint);
	printf("Integer: %d\n", integer);
	printf("Unsigned Long Long Int: %llu\n", unsignedlonglongint);
	printf("Long Long int: %lld\n", longlongint);
	printf("Float: %f\n", floatVar);
	printf("Double: %.16lf\n", doubleVar);
	printf("Long Double: %.22Lf\n", longdoubleVar);
	printf("Character: %c\n", charVar);
	return 0;
}
