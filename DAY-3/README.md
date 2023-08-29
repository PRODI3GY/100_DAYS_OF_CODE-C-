---DAY-3-----Summary

OBJECTIVES.

1. Learn more about type casting.

2. Learn about the ascii table.

3. Learn about puts and putchar.

4. Write a simple program that uses puts and putchar.

5. Write a simple program that shows both types of type casting.

6. Write a simple program that prints some characters with their respective ASCII code. 

WHAT I HAVE LEARNED AND DONE.

1. TYPE CASTING - There are two types of type casting.

- Implicit type conversion - As mentioned in DAY-2, this is when the compiler changes the data type of a value automatically in order to avoid data loss and preserve the accuracy of the value. For example when you are using two data types to perform operations, lets say for example a short integer and a long int or int the answer will automatically be changed to the 'bigger' data type in this case the long int. This method is also known as type promotion.  

- Explicit type conversion - Explicit type conversion is when the programmer specifies the data type that He/She wants. This is done by writing the target data type in brackets before the value or the expression. i.e (int)(a+b) or (float)97 + 9. This is useful for controlling the type conversion process.

a.) Situations where type casting can be used.

- Type casting is useful in ensuring compatibility in expressions.

- Type casting can be used to prevent data loss by converting to the 'bigger' data type.

b.) Disadvantages of type casting.

- Explicit type casting can lead to data loss when the programmer casts a value to a smaller datatype.

- Implicit type casting can also lead to data loss when truncation occurs, this is when a part of a value is removed to fit in another data type for example if a float data type contains a value of 78.98 and it is implicitly converted to an integer the numbers after the decimal point will be removed due to the result of truncation making the value stored in the integer datatype be 78 which is not accurate. Basically data loss can happen if a bigger data type is converted to a smaller one.

c.) Type casting does not necessarily change the value it changes how the value is intepreted.

2. ASCII TABLE - ASCII stands for American Standard Code for Information Interchange. This is an encoding standard used to represent text characters on computers and electronics. This means that if you write the letter 'A' it is translated to another format that the computer can understand(binary) and because you cannot translate text directly to binary, text has to be translated to a certain number so that that number can be directly translated to binary which is more easier. Every character, symbol, letter and number has a number that represents it on the ASCII table. The ASCII table also has a number representation of space, tab, backspace, escape and many others. 

- In C you can use the number representation of a character instead of the character itself in a program, apparently it is useful when working with strings in C, but I don't understand why yet but what I do understand is that if you want to find the ASCII value for a letter, number e.t.c you can find it using the printf function, for example if you want to know the ASCII representation of the letter 'A', you can use the format specifier of a number when printing the letter 'A' and it will print the ASCII representation of that letter, this also means that you can perform arithmetic operations on the ASCII representations of various letters(I don't get why this would be useful lol).

NOTE- ASCII does not represent all characters of all languages but UTF-8(another encoding system) contains a wider range of characters and languages

3. puts  - This is a function in C that is used to print out a string or a sequence of characters to the screen and appends a new line character at the end. This means that anything printed after a string printed by puts will go to a new line. puts belongs to the standard input output library so if you want to use puts you have to add '#include <stdio.h>' in your code.

4. putchar - This is a function in C that is used to print out a single character to the screen, it is also part of stdio. I returns EOF if an error occurs. EOF stands for End Of File but it can be used as an error indicator. There is more to EOF which I will dive into in day 4. In other functions like printf and puts you can add a newline characer at the end to format your code but in putchar you cannot since it accepts one and only one character and a newline is counted as a character so if you want to add a newline character you have to add another putchar function to do so.(I didn't know '\n' counts as a character so dumb).

PROBLEMS FACED
- Suprisingly none!

