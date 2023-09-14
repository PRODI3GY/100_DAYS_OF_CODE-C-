#include <stdio.h>

int main()
{
	printf("\tARITHMETIC OPERATORS\n");
	int a = 60;
	int b = 30;
	printf("(Addition)	 a + b  = %d\n",a+b);
	printf("(Subtraction)	 a - b  = %d\n",a-b);
	printf("(Multiplication) a * b  = %d\n",a*b);
	printf("(Division)	 a / b  = %d\n",a/b);
	printf("(Modulus)	 a %% b  = %d\n",a%b);
	printf("(Incrementing)	 a++    = %d\n",a++);
	printf("(Decrementing)	 a--    = %d\n",a--);

	printf("\tBITWISE OPERATORS\n");
	printf("Bitwise AND(&)  a & b = %d\n",a&b);
	printf("Bitwise OR(|)   a | b = %d\n",a|b);
	printf("Bitwise XOR(^)  a ^ b = %d\n",a^b);
	printf("Bitwise NOT(~)     ~a = %d\n",~a);
	printf("Right Shift    a >> 2 = %d\n",a>>2);
	printf("Left Shift     a << 2 = %d\n",a<<2);

	printf("\tASSIGNMENT OPERATORS\n");
	printf("Assignment,                 b  = %d\n",b = 20);
	printf("Assignment + Addition       b += %d\n",b+=1 );
	printf("Assignment + Substraction   b -= %d\n",b-=1);
	printf("Assignment + Division       b /= %d\n",b/=2);
	printf("Assignment + Multiplication b *= %d\n",b*=2);
	printf("Assignment + Modulus        b %%= %d\n",b%=2);
	printf("Assignment + AND            b &= %d\n",b&=2);
	printf("Assignment + OR             b |= %d\n",b|=2);
	printf("Assignment + XOR            b ^= %d\n",b^=2);
	printf("Assignment + NOT            b =~ %d\n",b=~2);
	printf("Assignment + Right Shift    b >>= %d\n",b>>=2);
	printf("Assignment + Left Shift     b <<= %d\n",b<<=2);

	printf("\tCOMPARISON(RELATIONAL) OPERATORS\n");
	printf("Equals Operator.                  a == %d\n",a == b);
	printf("Not Equal Operator.               a != %d\n",a != b);
	printf("Greater Than Operator.            a > %d\n",a>b);
	printf("Less Than Operator.               a < %d\n",a<b);
	printf("Greater Than or Equal To Operator a >= %d\n",a >= b);
	printf("Less Than or Equal To Operator    a <= %d\n",a <= b);

	printf("\tLOGICAL OPERATORS\n");
	printf(" Logical AND a && b = %d\n ",a&&b);
	printf("Logical NOT   !a   = %d\n ",!a);
	printf("Logical OR  a || b = %d\n ",a||b);
	return 0;
}
