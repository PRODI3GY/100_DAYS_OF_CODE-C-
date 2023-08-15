---DAY-4--Summary

OBJECTIVES

1. Learn about variables and constants.

2. Learn about various operators that can be used in c.

3. Learn about if else statement.

4. Write a simple program that displays all the type of variables in C.

5. Write a simple program that show various operators in use.

6. Write a simple program that uses an if statement.

WHAT I HAVE LEARNED AND DONE

1. Variables are 'containers' used to store data in a program. To use a variable in C you have to mention the data type that the variable will be storing, give the variable a name and then give it the value it will be storing. It is a good practice to give specific variable names to the variables according to the 'job' of the variable.
- There are 2 parts of making a variable in C, there is 'declaration' and 'initialization'.

- Declaration is just writing the data type and giving a name to your variable.

- Initialization is giving your variable a value. You can do both declaration and initialization on the same line or you can declare a variable then you can give it a value later on. Declaration is mostly used when someone hasn't figured out the value to be used or expecting the value from another source such as input. 
 
- When you declare a variable, the program allocates space of the variable according to the data type used, for example a float variable would be allocated 4 bytes. 

2. Constants are also 'containers' used to store data but the difference between a constant and a variable is that a constant's value cannot be changed compared to that of a variable. When using a variable, the value can be changed later in the program by initialization again but the same cannot be said about constants. If you want to change the value of a constant you have to go to the same place that you initialized the constant to change it's value.

- A constant is declared by writing 'const' then the data type of the constant, then the name of the constant.

- A constant cannot be left uninitialized.

- It is a good practice to name constants with uppercase letters however it is not a must.

3. Operators.

- Operators are symbols used to perform different operations in data in programming such as arithmetic operations(addition, substraction, multiplication and division), comparison of values e.t.c

- Operators can be classified into 5 categories in C.
	a.) Arithmetic operators.
	b.) Assignment operators.
	c.) Logical operators.
	d.) Relational operators.
	e.) Bitwise operators.
	
a.) Arithmetic Operators - These are the operators used for mathematical operations such as division, multiplication, addition and substraction.
	- * (Multiplication)
	- + (Addition)
	- - (Substraction)
	- / (Division)
	- % (Modulus) - It is used to find the remainder of a number after division. For example '17 % 5' will give you the answer 2. The modulus operator finds the remainder of the number on the left divided by the number on the right. 
	- ++ (Increment) - It is used to add 1(incrementing) to a value.
	- -- (Decrement) - It is used to reduce 1(decrementing) to a value.

b.) Bitwise Operators


c.) Assignment Operators - These are the operators used to give(assign) a value to it's left operand, this means that for example when you write 'x = 7' you are giving x(The left operand) a value of 7. The '='(equals) sign in this case is the assignment operator.

- As mentioned above the assignment operator can be used to give the value of the right operand to the value of the left operand. This can be used to show the difference between variables and constants. For example if a variable named 'x' was declared and initialized and now later in the program you write 'x = 98' the value will be completely changed to 98.(This cannot work in constants)

- Other assignment operators are,
	- '+=' - This operator adds the value to the right to the value to the left. For example when you write 'x += 5' this is the same as 'x = x + 5'(Adding the value to the right to the value to the left).
	- '-=' - This operator subtracts the value to the right from the value to the left.
	- '*=' - This operator multiplies the value from both sides.
	- '/=' - This operator divides the value on the right from the value on the left.
	- '%=' - This operator is used to find the remainder of the value of the left when it is divided by the value on the right.
	- ''
- Assignment operators can be combined with other operators such as arithmetic operators and Bitwise operators to perform even more complex operations.


