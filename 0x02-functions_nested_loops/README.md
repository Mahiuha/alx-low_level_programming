# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What are nested loops and how to use them?** 
*A loop in a loop. Usually FOR every X, do Y or FOR every I, do J. A good example of a nested nested nested nested loop is for every school, list the teachers, and for every teacher, list their class, and for every class, list the students, and for every student, list their grades. But that can be O^4 time and that is bad.*  

**What is a function and how do you use functions?** 
*A group of statements that perform a task. Every C program has at least one, because of main. Code can be divided into different functions. The C library has many built-in functions. Other aliases are methods, sub-routine, and procedure. The syntax is " return_type function_name( parameter_list ){body statements and stuff}.*  

**What is the difference between a declaration and a definition of a function?** 
*Declaration is telling the compiler, the function's name, return type, and parameters. A function declaration is the actual body of the function. The real code and meat of the code.*  

**What is a prototype?** 
*A function prototype tells the return data type, number and data types of arguments passed, and the order of the arguments passed. So function prototypes specify the input and output of the function, what to give and what to expect. Another alias is signature of the function. C90 has some defaults but C99 removes assumptions and are more restricted. C99 uses warning system to be backwards compatible.*   

**Scope of variables?** 
*This determines where the identifier may be accessible. Global scope is it can be accessed anywhere. To restrict access to only the current file, static is needed. Block scope is a local variable. If a same name variable is used in an inner block, then the visibility of the outer block variable ends at the declaration of the inner block. Functions are block. Their parameters are local. *  

**What are the gcc flags -Wall -Werror -pedantic -Wextra?** 
*Wall is a warning error. It enables all warnings that some consider questionable and easy to avoid. Werror converts all warnings into errors. So combining Wall and Werror is a string way to make some nice code. Pedantic issues warnings demanded by strict ISO C. It rejects programs that use forbidden extensions. The common use is for strict ISO C conformance. Wextra enables some extra warning flags that Wall does not enable. There are a lot of extra C++ checks but for the ones I care about (only C) it will print an error message for a pointer that is compated against a integer zero with equality comparators.*  

**What are header files and how to to use them with #include?** 
*Header files are files with a .h extension which contain C function declarations and macro definitions. Two types of header files, ones the programmer makes and ones that come with the compiler. By using #include we request to use a header file. Including it is equal to copying the content of the header file. <> is for standard list of directories and "" is for local self made programs.*  

## Each scripts and their output  
* Script 0 - Write a program that prints Holberton, followed by a new line. The program should return 0.  
* Script 1 - Write a function that prints the alphabet, in lowercase, followed by a new line. Prototype: void print_alphabet(void); You can only use _putchar twice in your code.  
* Script 2 -  Write a function that prints 10 times the alphabet, in lowercase, followed by a new line. Prototype: void print_alphabet_x10(void); You can only use _putchar twice in your code.  
*Script 3 - Write a function that checks for lowercase character. Prototype: int _islower(int c). Returns 1 if c is lowercase. Returns 0 otherwise. FYI: The standard library provides a similar function: islower. Run man islower to learn more.  
* Script 4 - Write a function that checks for alphabetic character. Prototype: int _isalpha(int c); Returns 1 if c is a letter, lowercase or uppercase. Returns 0 otherwise. FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.  
* Script 5 - Write a function that prints the sign of a number. Prototype: int print_sign(int n); Returns 1 and prints + if n is greater than zero. Returns 0 and prints 0 if n is zero. Returns -1 and prints - if n is less than zero.  
* Script 6 - Write a function that computes the absolute value of an integer. Prototype: int _abs(int); FYI: The standard library provides a similar function: abs. Run man abs to learn more.  
* Script 7 - Write a function that prints the last digit of a number. Prototype: int print_last_digit(int); Returns the value of the last digit.  
* Script 8 - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59. Prototype: void jack_bauer(void); You can listen to this soundtrack while coding :).  
* Script 9 - Write a function that prints the 9 times table, starting with 0. Prototype: void times_table(void).  
* Script 10 - Write a function that adds two integers and returns the result. Prototype: int add(int, int);  
* Script 11 - Write a function that prints all natural numbers from n to 98, followed by a new line. Prototype: void print_to_98(int n); Numbers must be separated by a comma, followed by a space. Numbers should be printed in order. The first printed number should be the number passed to your function. The last printed number should be 98. You are allowed to use the standard library.  
* Script 100 - Write a function that prints the n times table, starting with 0. Prototype: void print_times_table(int n).  If n is greater than 15 or less than 0 the function should not print anything.  
* Script 101 - If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line. You are allowed to use the standard library.  
* Script 102 - Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line. The numbers must be separated by comma, followed by a space. You are allowed to use the standard library.  
* Script 103 - Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line. You are allowed to use the standard library.  
* Script 104 - Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line. The numbers should be separated by comma, followed by a space. You are allowed to use the standard library. You are not allowed to use any other library (You can’t use GMP etc…). You are not allowed to use long long, malloc, pointers, arrays/tables, or structures. You are not allowed to hard code any Fibonacci number (except for 1 and 2).  

#### Limitation of these projects:  
___
-Allowed editors: vi, vim, emacs  
-All your files will be compiled on Ubuntu 14.04 LTS  
-Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic  
-All your files should end with a new line  
-A README.md file, at the root of the folder of the project is mandatory  
-Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl  
-You are not allowed to use global variables  
-No more than 5 functions per file  
-You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden  
-You are allowed to use _putchar  
-You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account  
-In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples  
-The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called holberton.h  
-Don’t forget to push your header file  

