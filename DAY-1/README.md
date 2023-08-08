-----DAY-1--------Summary

OBJECTIVES
1. Set up development environment.
2. Learn how to compile programs and the compilation process.
3. Create a simple C program.

WHAT I LEARNED AND DID.

1. I set up my environment by installing gcc compiler on my computer, as for the text editor I am using vim(Decided to join the dark side of the holy war), I haven't mastered vim but I know how to move around insert text and to exit(The most important lol) which is enough and I will learn more as I continue using it.

2. Here is what I have learned about the compilation process
- C is a compiled language and not an interpreted one like python,javascript,PHP e.t.c.

- The difference between an interpreted and a compiled language is that when you use a compiled language you convert it directly to machine code when compiling it but when using an interpreted language you use an interpreter to run through a program and execute it line by line which means that an interpreter translates source code to machine code when the program is running or executes the instruction directly. This might be slow compared to compiling but more portable compared to compiled code. This is because compiled code is specific to the architecture where it was compiled therefore it will not work in other environments that are not using the same architecture but for interpreted languages the interpreter reads and executes the source code line by line at runtime(When the program is running) on the machine that it is ran on. There are other pros and cons between compiling and interpreting.

- Most programming languages can have both compiled and intepreted implementations.   
- The compilation of a C program is divided into 4 parts.
- The compiler has 4 parts(Preprocessor,compiler,assembler and linker).

- In step 1(Preprocessor) the compiler removes the comments in the code, it then looks at the preprocessor directives in the code and does what the preprocessor directives instruct. Preprocessor directives are instructions that instruct the compiler on what to add, how to treat certain areas of code e.t.c some examples of preprocessor directives are #include, #define, #ifndef. For example when you write '#include <stdio.h>' in your code this is a preprocessor directive that tells the compiler to add the contents of the 'stdio.h' file in your code.

- In step 2(Compiler) the compiler checks for syntax and semantic errors in the code it also turns the source code into assembly code which is code that the computer almost understands or as chatgpt puts it "Human readable representation of machine code". Let me explain, source code is the code that one writes when programming, assembly code is code that is one step closer to machine code, machine code is code that the computer fully understands which is also known as binary, object code is code that has been compiled but not fully. The CPU only understands machine code which is binary, object code also contains binary but contains other data as well in which makes object code be in a format that the CPU cannot execute.

- In step 3(Assembler) the assembler converts the generated assembly code to object code, which contains machine code but also contains other data which makes it to be in a format that the CPU cannot execute as explained.

- In step 4(Linker) the linker combines all the object files together to create an executable file.The object files meaning the object file of our code and the object files of libraries. This is where the object files are now converted to a format that the CPU can execute. Libraries are precompiled code that you can use in your code to enable certain functionalities, libraries can contain things such as functions for example the standard input output library(stdio.h) enables you to use functions like 'printf' to print output to the screen(console). When the object files of the libraries used in your program are linked together with the object file of your code, one file is now generated that can be executed on your computer(executable file).

3. I created a simple C program to display "Hello World"(The usual lol), I used the stdio library and made use of the printf function to display the message "Hello World".

4. C programs have a '.c' extension, object files have a '.o' extension.

5. You can use the gcc compiler to produce a file  at a specific process of compilation e.g
	- gcc -E nameoffile.c (produces the file after preprocessing only)
	- gcc -S nameoffile.c (gives you the assembly code generated from your source code)
	- gcc -c nameoffile.c (gives you object code from your source code(object code after step1,2 and 3))

CHALLENGES FACED
- When learning the compilation process, chatgpt did not include the "assembler" process of compilation which misled me but I found out later. This has shown me that it is important to have multiple sources of information and although AI is very helpfull it can sometimes give inaccurate information.
