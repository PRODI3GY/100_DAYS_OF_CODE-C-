--DAY-2---Summary

OBJECTIVES

1. Learn about datatypes in C.

2. Learn more about printf.

3. Create a simple program that outputs all datatypes on the screen.

WHAT I HAVE LEARNED AND DONE.

1. DATATYPES - These are the types of data 'DATATYPES' that one can use that are supported in C.
             - Data types determine the type of data, how it is stored in memory and what operations can be done on it.

2. Examples of Datatypes.

-Integers(int) - These are just ordinary numbers e.g 10,700,20(note that they do not contain a decimal point). An integer uses 4 bytes when stored in memory. An integer can store a number from -2,147,483,648 to +2,147,483,648 in its 4 bytes that uses as storage, if you try to store a number above the positive limit, it defaults to the lowest possible value which is -2,147,483,648, if you try to store a number lower than -2,147...... it overflows and becomes the positive number.

-unsigned int - What happens if you want to store a number that is greater than +2,147,483,648? This is the exact purpose of unsigned int. It can store a number from 0 to 4,294,697,295.

-long long int - This datatype can store a number within the range of -9 quantillion to +9 quantillion but it occupies 8 bytes of space.(The reason as to why this datatype is known as a "long long int" is because a normal integer is a "long int" but people dont use that long because it is seen as unnecessary)

-unsigned long long int - This datatype can store a number within the range of 0 to +18 quantillion, it also occupies 8 bytes of memory

-short int - When you are desperate to store a smaller number and also to save space you can use this datatype which is only 2 bytes in size and can store values within the range of -32,768 to -32,767)

-unsigned short int - This datatype is also 2 bytes in size and can store numbers within the range of 0 to 65,535.

-Float(float) - These are numbers like 2.4,78.98,82.3(Numbers that contain a decimal point). These numbers are known as floating point numbers, a float uses 4 bytes when stored in memory. A float can store upto 7 digits only after that it loses accuracy for example when using a float to store the number of pi it can only store upto the 6th number after the decimal point that is 3.141592 if you add another number after that it rounds it off for example 3.1415926 becomes 3.141593 and it loses its accuracy. If you really want the number to be accurate then you should use a double.

-Double(double) - This datatype has the same use as a float but it is used to store a decimal number that has higher precision this means that it can store a number which has a higher number of numbers after the decimal point than a float, this is because a double uses twice the space of a float which is 8 bytes. A double can store upto 16 digits whereas a float can store upto 7 digits.

-Character(char) - This is a datatype used to store a single character in C e.g 'P','f','j'(Note that you can store a number as a character in C as long as you put single quotation marks around it, it will be processed as a character.) A character uses 1 byte when stored in memory.

NOTE - C does not support the datatype "string" that is used to store words, so instead of using a string datatype they use an array of characters to store a word. An array is a structure that can store multiple values.

3. For you to be able to print out a datatype on the screen you need to tell printf what kind of datatype you want to print on the screen and you do this by using a format specifier. Each datatype has a unique format specifier.

For Integers it is--------------"%d"
For short int is----------------"%d"
For unsigned short int is-------"%d"
For unsigned int is-------------"%u"
For long long int is------------"%lld"
For unsigned long long int is---"%llu"
For a float is is---------------"%f"
For a double it is--------------"%lf"
For a character is--------------"%c"

4. printf - printf is just a function but it was not originally in C, it just belongs to the standard input output library(stdio.h) therefore when using printf you must include stdio.h in your program.

PROBLEMS FACED.
1. When creating a simple program to print all the data types using printf, my program did not compile because there was a compiler flag named 'Wformat' which kept bringing an error. The error message was saying that some of the formats did not match the specific format specifiers that I had used, for example when trying to print the unsigned int data type(printf("%u\n", 4294967295);), the compiler confused the number to be of type 'long int' while this number can be of type 'long int' it still the maximum value that an unsigned int can store so I was not wrong, after researching(google and chatgpt ofc) why this happened I found out that this error occurs because of the flag 'Wformat' as I mentioned earlier which is used to enable string format checking. When you use the value directly in printf the compiler can sometime mistake the format of the value/constant in use despite using a format specifier to tell printf what value is being expected. To understand this properly you need to understand this 3 concepts.

	a.) Type inference - This is when the compiler determines the data type of a value depending on its characteristics and context. Sometimes when writing a program you don't always specify the datatype(the same way I did in the program)so this leaves the compiler to try and figure out for itself the type of value you are working with.

	b.) Implicit Type Conversion - This is when the compiler changes the datatype of a value without you telling it explicitly. For example when you add a float datatype and an integer, the compiler will change the integer to a float data type in order for the operation to continue.

	c.) Promotion - This is a type of implicit type conversion when a value of a smaller data type is changed to a larger data type to prevent the loss of data. For example when using a short integer and the number exceeds the capacity of which a short integer can store it is converted to a long integer to preserve the precision/accuracy. 

- So what happened in my case was type inference and the compiler was wrong due to not enough information about the value was provided only the format specifier provided the data needed which is sometimes not enough, to fix this problem I had to type cast the type of the value before the number. This is essentially naming the datatype of the value you are using. This is of course another rabbit hole that I will dive into in Day 3.


---program name is 'DAY2.c' found in the DAY-2 directory.
