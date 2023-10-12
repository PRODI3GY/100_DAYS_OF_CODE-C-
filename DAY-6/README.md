------DAY-6------SUMMARY

OBJECTIVES
1. Learn about functions.
2. Learn about arrays.
3. Learn about scanf.
4. Learn about user input.
5. Create 3 functions, one that takes variables as arguments, one that takes arrays as an argument, and one that does not take any argument.
6. Create an array and a loop that sorts through that array and print each element.
7. Create a function that sorts through an array and prints each element in reverse order.

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
             - There is two parts when creating a function, there is the declaration and definition. When declaring the function you write the name of the function, the parameters and the return type the function should return.
             - When defining the function you write the code that is to be executed when someone summons the function.
             - It is recommended that one should separate the declaration and definition for code optimization but one can still be able to declare and define a function in the same place.

2. ARRAYS    - Arrays are data structures that are used to store multiple values, basically an array is a variable capable of storing multiple values instead of one value like a variable.
             - A data structure is a way of organizing and storing data in a computer so it can be accessed and manipulated efficiently.
             - In C an array can only store multiple values of the same type due to it's static nature unlike in other languages where an array can store different types of data.
             - The values stored in an array are known as elements.
             - Multidimensional arrays are arrays inside other arrays.
             - One of the advantages of arrays in C is that they are memory efficient because they are stored in contiguous memory locations which basically means the elements(values) in the array are stored sequentially(one after the other) in memory which results in a simple and efficient way of managing memory.
             - Arrays are also advantageous when storing collections of data which makes it easy to sort and search through them.
             - Individual elements in an array can be accessed by "indexing".
             - Indexing is a method used to retrieve elements in an array. When an element is stored in an array, it is assigned a number according to the position it is stored, if it is the first element of the array, it's index is 0, the second element's index is 1. This is the principle used in array indexing, so if you want to retrieve the 1st element of an array you have to specify index 0.
             - Since an array stores only elements of a specific data type can one type cast to bypass this? or is there another way to bypass this? we need to investigate how an array is implemented in C. 
