---DAY-4--Summary

OBJECTIVES

1. Learn about variables and constants.

2. Learn about various operators that can be used in c.

3. Learn about if statement.

4. Write a simple program that displays a variable of every datatype in C.

5. Write a simple program that show various operators in use.

6. Write a simple program that uses an if statement.

WHAT I HAVE LEARNED AND DONE

1. Variables are 'containers' used to store data in a program. To use a variable in C you have to mention the data type that the variable will be storing, give the variable a name and then give it the value it will be storing. It is a good practice to give specific variable names to the variables according to the 'job' of the variable.
- There are 2 parts of making a variable in C, there is 'declaration' and 'initialization'.

- Declaration is just writing the data type and giving a name to your variable.

- Initialization is giving your variable a value. You can do both declaration and initialization on the same line or you can declare a variable then you can give it a value later on. Declaration is mostly used when someone hasn't figured out the value to be used or expecting the value from another source such as input. 
 
- When you declare a variable, the program allocates space of the variable according to the data type used, for example a float variable would be allocated 4 bytes of memory space. 

2. Constants are also 'containers' used to store data but the difference between a constant and a variable is that a constant's value cannot be changed compared to that of a variable. When using a variable, the value can be changed later in the program by initialization again but the same cannot be said about constants. If you want to change the value of a constant you have to go to the same place that you initialized the constant to change it's value.

- A constant is declared by writing 'const' then the data type of the constant, then the name of the constant.

- A constant cannot be left uninitialized.

- It is a good practice to name constants with uppercase letters however it is not a must.

3. Operators.

- Operators are symbols used to perform different operations in data in programming such as arithmetic operations(addition, substraction, multiplication and division), comparison of values e.t.c

- Operators can be classified into 5 categories in C.
	a.) Arithmetic operators.
	b.) Bitwise operators.
	c.) Assignment operators.
	d.) Comparison operators.(Relational operators)
	e.) Logical operators.
	
a.) Arithmetic Operators - These are the operators used for mathematical operations such as division, multiplication, addition and substraction.

- For example,
- * (Multiplication)
- + (Addition)
- - (Substraction)
- / (Division)
- % (Modulus) - It is used to find the remainder of a number after division. For example '17 % 5' will give you the answer 2. The modulus operator finds the remainder of the number on the left divided by the number on the right. 
- ++ (Increment) - It is used to add 1(incrementing) to a value.
- -- (Decrement) - It is used to reduce 1(decrementing) to a value.

b.) Bitwise Operators - This operators are used to perform operations on individual bits. To understand how bitwise operations work, I needed to understand the concept of logic gates(AND,OR,XOR,NOT).

- Computers only understand binary code which is basically 1s(ONEs) and 0s(ZEROs), this 1s(ONEs) and 0s(ZEROs) can be boiled down to on and off with on being represented with a 1(ONE) and off with a 0(ZERO). This is basically how computers function because of the millions of on and off switches in a computers CPU. These on and off switches are what make the computer perform calculations and make decisions. logic gates are combinations of this switches that work together to process information. 

- A logic gate can have one or multiple inputs but can only produce one output, for example a NOT gate can only receive one binary input and the output produced is the opposite of the input for example if the input was a 1(ONE) the output would be a 0(ZERO). An AND gate on the the other hand can receive 2,3,4 or more inputs according to the design, it produces output after checking conditions(The condition in AND gates is if all inputs are 1s(ONEs) the output will be also a 1(ONE), but if any of the input is a 0(ZERO) the output will be a 0(ZERO)), the more input it has the more conditions it checks to produce output. For example an AND gate that receives 2 binary inputs that are both 1s(ONEs) would produce an output of a 1(ONE) but if the one of the inputs is a 0(ZERO) the output would be a 0(ZERO).

- A one or a zero is stored as a bit in computers which stands for binary digit. Initially a bit represents 2 possibilities which is a ZER or a ONE, if you add another bit(2 bits) the possibilities increase to 4. So the more bits you add, you create larger units of data and the higher the number possibilities that can be represented. This is the basis of how computers store and process data internally.

- A group of 8 bits is known as a byte, a byte possesses enough combinations to represent a wide range of characters, symbols and numbers(ASCII makes more sense now), a group of bytes can represent a lot more.(back to bitwise operators).

- Bitwise operators are powerful because you can manipulate individual bits using them.

- Remember the operators are used when comparing 2 different values or bytes.

- Assuming variable 'a' has a value of '10101010' and b has a value of '11001100' so
 	a = 10101010
	b = 11001100

	- '&' - Bitwise AND - compares 2 values bit by bit, if both bits in the same position are 1, it will result to a 1 if not it will result to a 0, so when we compare byte 'a' and byte 'b' the result will be 1000100, so 'a & b' is 1000100.(AND gate)

	- '|' - Bitwise OR - When Bitwise OR is used to compare 2 values bit by bit, it checks only if either of the bits has a 1, if it does this will result to a 1 unlike the Bitwise AND operator. So a | b will result to 11101110.

	- '^' - Bitwise XOR - Bitwise XOR is kind of similar to Bitwise OR, it checks if either of the bits has a 1 if that is the case it will result to a 1 but if both bits are 1 it will result to a 0.

	- '~' - Bitwise NOT - Unlike the other operators Bitwise NOT can be used with only one operand(value). It is used to flip all the bits to it's opposite, all 1s become 0s and all 0s become 1s, so when it is used against 'a' the result will be 01010101. So ~a is 01010101.
	
	- '<<' - Left Shift - It is used to move all the bits a certain number of  positions to its left. What this means is that , for example we have the binary representation of the number 5 which is '00000101' when we write 5 << 2, this means we are moving the bits 2 positions to the left which will result to '00010100' which is equals to 20 in the decimal number system. When we shift the bits one position to the left it multiplies by 2 so when we move two positions to the left we multiply the number by 4 that is why it results to 20.

	- '>>' - Right Shift - It is used to move all the bits a certain number of positions to its right, which will result to divisionby 2 when we shift the bits one position to the right.


c.) Assignment Operators - These are the operators used to give(assign) a value to it's left operand, this means that for example when you write 'x = 7' you are giving x(The left operand) a value of 7. The '='(equals) sign in this case is the assignment operator.

- As mentioned above the assignment operator can be used to give the value of the right operand to the value of the left operand. This can be used to show the difference between variables and constants. For example if a variable named 'x' was declared and initialized and now later in the program you write 'x = 98' the value will be completely changed to 98.(This cannot work in constants)

- Other than assigning values assignment operators can be combined with other operators such as arithmetic operators and Bitwise operators to perform even more complex operations.

- For example,
	- '+=' - This operator adds the value to the right to the value to the left. For example when you write 'x += 5' this is the same as 'x = x + 5'(Adding the value to the right to the value to the left).
	- '-=' - This operator subtracts the value to the right from the value to the left.
	- '*=' - This operator multiplies the value from both sides.
	- '/=' - This operator divides the value on the right from the value on the left.
	- '%=' - This operator is used to find the remainder of the value of the left when it is divided by the value on the right.
	- '&=' - When you write 'x &= 3', this is the same as 'x = x & 3 '. Assuming x = 5 it will get the binary representation of 5, perform an AND operation with the binary representation of 3 which will result to the binary representation of 1.
	- '^=' - This operator will perform a XOR operation between the two operands.
	- '|=' - This operator will perform an OR operation between the two operands.
	- '>>='- This operator will move the left's operand bits to the right the number of times the number on the right of the sign.
	- '<<='- This operator will move the left's operand bits to the left the number of times the number on the right of the sign.

d.) Comparison Operators(Relational) - This are operators that are used to compare two values.

- For example,
	- '==' - This is the equals to operator which means the 'same as'. It is used to show two values are equal to each other.
	- '!=' - This is the not equal to operator. It is used to show inequality between two values.
	- '>'  - This is the greater than operator. It is used to show the value on the left is greater than the value on the right.
	- '<'  - This is the less than operator. It is used to show the value on the left of the sign is less than the one on the right.	- '>=' - This is the greater than or equal to operator. It is used to show the value on the left is greater than or equal to the one on the right.(2 possibilities)
	- '<=' - This is the less than or equal to operator. It is used to show the value on the left is less than or equal to the one on the right.

e.) Logical Operators - These are operators used to test if a condition is true or false against operands used.

- For example,
	- '&&' - This operator(AND) evaluates if both expressions evaluate to true, if they are true it will result to true but if either of the expressions are false it will result to false.
	- '||' - This operator(OR) evaluates if either of the expressions evaluate to true, if that's the case it will result to true but if both are false it will result to false.
	- '!' - This operator(NOT) negates the operation, reverses the result, if it is true it will return false. 

4. IF STATEMENT
 
- This is known as a conditional statement or a control structure in programming. A conditional statement is a structure that allows you to control the flow of your program based on certain conditions or critea. This means that you can give this statement certain options to choose from depending on a result or an outcome, in short they can make decisions based on criteria given to them.
- An if statement evaluates a condition if the condition is true a block of code is executed, if not the block of code is skipped. If you wanted another block of code to be executed if the condition is false you can use an if-else statement which executes a certain block of code if a condition is true or another one if the condition is false.


CHALLENGES FACED

1. When writing the program to print every type of variable, there was a warning by the gcc compiler that would not allow the program to print the unsigned long long int despite using the correct format specifier(%llu). The problem was the compiler, any integer literal without a suffix is intepreted as type int with the compiler. A suffix is just a letter(s) you put after a number to specify the type of the number, so for the program to print the unsigned long long int, I had to add ULL at the end of the number. I prefer this than type casting.

2. I also noticed the double data type was only printing 8 numbers despite giving it a value that contains 16 numbers. This time the problem was the printf function. Despite using the correct format specifier for a double(%lf) and using the correct suffix(D) only 8 numbers were being printed on the screen. I later found out that when you use the printf function to print a large decimal number it rounds off the number for display, however you can specify the precision in the format specifier(Mentioning how many numbers you would like to be displayed in the output). So for this problem I just put (%.16lf) and the problem was solved.

- Then I started thinking what if I had a large number but did not want to count the number in order to know what precision to set when printing the number, what would I do?. I found out that you can use the format specifier (%g) which will adapt with the situation. It works with any float data type as well as integers but when you use it with integers it does not offer any added adavantage so it is better to use the default ones.
 











































































