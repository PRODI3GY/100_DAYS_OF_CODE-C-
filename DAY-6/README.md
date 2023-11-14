------DAY-6------SUMMARY
OBJECTIVES
1. Learn about functions.
2. Learn about arrays.
3. Learn about scanf and user input.
4. Create 3 functions, one that takes variables as arguments, one that takes an array as an argument and prints all of it's elements, and one that does not take any argument.
5. Create an array and a loop that loops through that array and print each element.
6. Create a function that loops through an array and prints each element in reverse order.
7. Create a program that accepts user input and outputs it.

WHAT I HAVE LEARNED AND DONE.
1. FUNCTIONS - Functions are blocks of code that contain instructions that are used to execute a specific task or a set of tasks.
             - One advantage of functions is re-usability, the function has to be created once but you can re-use it as many times as you can in your code by "calling" it. 
             - Calling a function simply means to summon a function. 
             - For example if your program requires that you need to add certain numbers after sometime, you can create a function that adds numbers then you can call it everytime your program needs to add numbers instead of re-writing code that adds numbers, this also causes your program to be neat and organized. 
             - When you create function you can make it a requirement that when someone calls the function, someone has to provide certain data so that the function can use that data to work, this is called specifying parameters and the data someone provides is known as an argument.
             - One can specify as many parameters as you want, parameters can be variables or even arrays.
             - The arguments that someone provides should be the same as the number of parameters specified.
             - It is not a must for a function to have parameters, it can just contain code to be executed and when the function is called it will not be must for one to give it arguments.
             - One can also specify the type of value that is to be returned after a function does it's job.
             - Variables declared in a function only exists in that function and cannot be used anywhere else outside that function.
             - There is two parts when creating a function, there is the declaration and definition. When declaring the function you write the name of the function, the parameters and the return type the function should return.
             - When defining the function you write the code that is to be executed when someone summons the function.
             - It is recommended that one should separate the declaration and definition for code optimization but one can still be able to declare and define a function in the same place
             - Passing by value - means copying a value to a function so that it can be used in the operations of the function, if a variable is storing the value outside the function, the value in the variable outside the function won't be affected in any way by the operations inside the function.
             - Passing by reference - means referring to a value in a program to be used by a function. If a value is storing the value outside the function the operations of the function will affect the value in the variable because now the value is not being copied to the function rather it is being referred to.

2. ARRAYS    - Arrays are data structures that are used to store multiple values, basically an array is a variable capable of storing multiple values instead of one value like a variable.
             - A data structure is a way of organizing and storing data in a computer so it can be accessed and manipulated efficiently.
             - In C an array can only store multiple values of the same type due to it's static nature unlike in other languages where an array can store different types of data.
             - The values stored in an array are known as elements.
             - Arrays are declared by specifying a data type, giving it a name and then using square brackets to specify the number of elements to be stored. Specifying the number of elements stored is not necessary.
             - Multidimensional arrays are arrays inside other arrays.
             - One of the advantages of arrays in C is that they are memory efficient because they are stored in contiguous memory locations which basically means the elements(values) in the array are stored sequentially(one after the other) in memory which results in a simple and efficient way of managing memory.
             - Arrays are also advantageous when storing collections of data which makes it easy to sort and search through them.
             - Individual elements in an array can be accessed by "indexing".
             - Indexing is a method used to retrieve elements in an array. When an element is stored in an array, it is assigned a number according to the position it is stored, if it is the first element of the array, it's index is 0, the second element's index is 1. This is the principle used in array indexing, so if you want to retrieve the 1st element of an array you have to specify index 0.
            * - Since an array stores only elements of a specific data type can one type cast to bypass this? or is there another way to bypass this? I will investigate if there is a way to bypass this and a good place to start is checking how an array is implemented in C(If I can understand it lol). 

3. SCANF     - User input is data given by the person using the program.
             - User input can be requested by the program so often you have to find a way to create this interaction, for example you can output text on the screen to ask a user to give you certain data after the user does something with your program or initially when the user runs your program.
             - You have to restrict the type of data the program receives from the user because this is usually the origin of vulnerabilities that can be used to hack your program.
             - Scanf is a function used to take input from the user or from a file.
             - Scanf takes 2 arguments, a string and the address where the input will be stored.
             - The 1st argument can be a format specifier which tells scanf what kind of input it is expecting.
             - You get the memory address of where a value will be stored by adding '&' before the variable name where the value will be stored. For example &number where 'number' is the name of a variable. '&number' refers to the memory address of where the value stored by number resides/stays.
             - A memory address is just an address that a computer gives data when it is stored to know where specific data stays.
             - There are 2 kind of specifiers in C, type specifiers and conversion/format specifiers.
             - A type specifier is a keyword used to specify the data type to be used. A keyword such as 'int' or 'float' to specify an integer and a float datatype.
             - Type specifiers are used to declare variables, arrays, functions and even to define the return type of functions among other use cases.
             - A conversion/format specifier is symbolized by a '%' sign and a letter afterwards to specify the format of data expected to be used.
             - A format specifier is used in functions such as printf and scanf to define the kind of data expected.

 CHALLENGES FACED

1. This is not a challenge but something I have learned when tackling objective 4, I created a function that adds 2 numbers and the arguments are stored in 2 integer variables and also the function returns an integer value, I realized you can juggle with types within a function, you can make the function return a float but put in integer arguments and it would still work.- I realized that after calling the addition function in the main function the program would compile but I did not get any output, so I had to use the printf function in the main function when calling the addition function, it got me thinking to add the printf function in the code of the addition function so that when I call the function it would just print the output on the screen, but then I learned that, that beats one of the purposes of functions which is reusability, if you need to use the output of the function in the future you would need to change the function which would cause a hassle if it was a large program.
 - There is also something that is called coupling in software which basically means dependency between different components of a program.
 - If components are more dependent on each other the program would be less flexible, hard to maintain and adding new features would also be harder.
 - If components are less dependent it would be the latter but it would be more complex and cause the program to have significantly more lines of code.

2. This is also something that I have learned when tackling objective 4, when you declare and define a function before the main function, it is considered bad practice since you may have multiple functions before you can see the main function which is also very messy, but when you write functions below the main function and try to use them in the main function the program would not recognize it bringing an error "implicit....." the solution to this is declaring the function(specifying the return type, name of the function and parameters if there are any) before the main function which tells the compiler that the function exists then write the function fully, below the main function which involves declaring the function again and defining the instructions that it should perform. 

3. I also made an integer array but put characters as the values, but when printing the characters it still worked. It worked because the characters are stored as their ASCII representations which are numbers(integers), but it is not advisable to do this in a real program unless that is part of it's functionality.

4. I have learned about the 'sizeof' operator which is used to get the size of it's argument in bytes and I ran into a problem where it would not print the size because of the wrong format specifier used when expecting the result from 'sizeof', turns out 'sizeof' operator only returns values of datatype "size_t" which is an unsigned integer type because sizes are not expected to be negative.

5. I learned that when you use an array as a parameter in a function, the moment you call that function and use an array as the argument to that function, the array decays to a pointer which means the array changes it's form to a pointer which points to the location in memory of the 1st element of the array. An array is stored in a contigous location in memory which means the elements are stored following each other in a block of memory, so when the array decays to a pointer you can still get the other elements easily in memory by moving one step forward to get the next element and so on and so forth.
