------DAY-5-------Summary

OBJECTIVES
1. Learn about switch case.
2. Learn about break.
3. Learn about the while loop and do while.
4. Learn about the for loop.
5. Learn about continue.
6. Write a simple program that uses switch case.
7. Write a simple program that uses a for loop.
8. Write a simple program that uses a while loop.
9. Write a simple program that uses a do while loop.
10. Write a simple program that showcase the use of break and continue. 

WHAT I HAVE LEARNED AND DONE
1. SWITCH CASE - Switch case works the same as an if-else statement except it is more neat. Switch case is more suitable used when comparing one variable to many values.
               - Switch case is more efficient than if-else statement in languages like C and C++ because of the way it is optimized by the language and compiler.

2. How a switch case is optimized to become more efficient
    - In C and C++ a switch case is implemented using a jump table for faster execution. Now what does this mean, this means that when you use a switch statement in a program a jump table or a similar mechanism is used to execute the statement.
    - Now what the heck is a jump table and why is it faster, when using an if-else statement you basically check if a condition is true then execute code, if it is false you go to the next condition check it and if it is false go to the next and so on and so forth, so what if you have a bunch of conditions? this will certainly take more time, but for a jump table the program jumps to the appropriate code that matches the condition and executes that code directly(This is a very simple explanation but there is more to it and I don't understand it fully therefore I am going to attempt to write a jump table in the near future) 
    - Now how does a jump table know the appropriate code that matches a condition? A jump table uses an array of pointer to functions. An array is basically a variable that can store multiple values and  pointer to functions are:  - a pointer is code that points to an address of memory that contains certain instructions(code). Functions are blocks of code that contain certain instructions. So from what I have understood is that pointer to functions are pointers that point to certain blocks of code. This means that when you have a condition that matches a value in the array of the jump table that value points to a certain block of code which is executed, therefore there is no time wasted checking other conditions. This means that when a value is matched it automatically knows what code to execute. **This is my best explanation of a jump table, I dont  know if I have gotten all the details.

3. BREAK - Break is a keyword that is used in a switch statement that is used to exit the switch statement and continue with code execution outside the statement. A "break" is necessary because once a case matches the condition all the code from the case that matches the condition throughout the rest of the statement is executed, this is known as a "fallthrough" which is advantageous in some situations but you don't want this happenning unintentionally.
        - Other keywords that stop the execution of a switch statement are default(which is used to switch the execution to another block) and return.
        - Default is used to switch the execution to another block of code whenever every case in the switch statement has not matched the condition.

4. WHILE LOOP - A loop is a control structure that allows you to execute code repeatedly either for a specified number of times or until a condition is met.
              - A While loop is used to execute a block of code as long as the condition is true or until the condition becomes false.
   DO WHILE LOOP 
              - A Do While Loop executes a block of code first then checks if the condition is true, if it is true, it continues executing that block of code.

5. FOR LOOP - A For Loop is used when one has a specific number of times of which one wants to repeat(iterate) a block of code.

6. CONTINUE - The 'CONTINUE' keyword is used to break out of an iteration of code then continue to the next iteration, unlike break which is used to exit the loop or statement completely,               continue just skips one iteration then continues to the next.

PROBLEMS FACED.
1. Understanding jump tables was kind of a harsh one for me because it contained some advanced topics that I haven't covered yet, but hopefully as I advance and understand those topics then try to create a jump table then my understanding will grow and it will become more clear.

2. This is just a by the way that I learned after accidentally leaving a semi-colon in the for loop after the ')' bracket. A semi-colon shows the end of a statement meaning the code in the curly braces below the for loop did not function according to the conditions set in the for loop but still the printf function that was to be executed according to the conditions of the for loop functioned despite being inside curly braces, apparently curly braces are used to group statements together into one code block, that is why the printf function still functioned.

**ALL CODE SAMPLES FOR THE OBJECTIVES ARE IN THE SAME DIRECTORY WITH THE README.
