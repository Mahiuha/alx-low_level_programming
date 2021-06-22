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
*This determines where the identifier may be accessible. Global scope is it can be accessed anywhere. To restrict access to only the current file, static is needed. Block scope is a local variable. If a same name variable is used in an inner block, then the visibility of the outer block variable ends at the declaration of the inner block. Functions are block. Their parameters are local.*   

**What are the gcc flags -Wall -Werror -pedantic -Wextra?**  
*Wall is a warning error. It enables all warnings that some consider questionable and easy to avoid. Werror converts all warnings into errors. So combining Wall and Werror is a string way to make some nice code. Pedantic issues warnings demanded by strict ISO C. It rejects programs that use forbidden extensions. The common use is for strict ISO C conformance. Wextra enables some extra warning flags that Wall does not enable. There are a lot of extra C++ checks but for the ones I care about (only C) it will print an error message for a pointer that is compated against a integer zero with equality comparators.*  

**What are header files and how to to use them with #include?**  
*Header files are files with a .h extension which contain C function declarations and macro definitions. Two types of header files, ones the programmer makes and ones that come with the compiler. By using #include we request to use a header file. Including it is equal to copying the content of the header file. <> is for standard list of directories and "" is for local self made programs.*  


## Each scripts and their output   
* Script 0 - Write a function that checks for uppercase character. Prototype: int _isupper(int c). Returns 1 if c is uppercase. Returns 0 otherwise. FYI: The standard library provides a similar function: isupper. Run man isupper to learn more.   
* Script 1 - Write a function that checks for a digit (0 through 9). Prototype: int _isdigit(int c); Returns 1 if c is a digit. Returns 0 otherwise. FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.    
* Script 2 -  Write a function that multiplies two integers. Prototype: int mul(int a, int b);  
* Script 3 - Write a function that prints the numbers, from 0 to 9, followed by a new line. Prototype: void print_numbers(void); You can only use _putchar twice in your code.  
* Script 4 - Write a function that prints the numbers, from 0 to 9, followed by a new line. Prototype: void print_most_numbers(void); Do not print 2 and 4. You can only use _putchar twice in your code.  
* Script 5 - Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line. Prototype: void more_numbers(void); You can only use _putchar three times in your code.   
* Script 6 - Write a function that draws a straight line in the terminal. Prototype: void print_line(int n); You can only use _putchar function to print. Where n is the number of times the character _ should be printed. The line should end with a \n. If n is 0 or less, the function should only print \n. 
* Script 7 - Write a function that draws a diagonal line on the terminal. Prototype: void print_diagonal(int n); You can only use _putchar function to print. Where n is the number of times the character \ should be printed. The diagonal should end with a \n. If n is 0 or less, the function should only print a \n.  
* Script 8 - Write a function that prints a square, followed by a new line. Prototype: void print_square(int size); You can only use _putchar function to print. Where size is the size of the square. If size is 0 or less, the function should print only a new line. Use the character # to print the square.  
* Script 9 - Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz. Each number or word should be separated by a space. You are allowed to use the standard library.  
* Script 10 - Write a function that prints a triangle, followed by a new line. Prototype: void print_triangle(int size); You can only use _putchar function to print. Where size is the size of the triangle. If size is 0 or less, the function should print only a new line. Use the character # to print the triangle.   
* Script 100 - Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line. You are allowed to use the standard library. Your program will be compiled with this command: gcc -Wall -pedantic -Werror -Wextra 100-prime_factor.c -o 100-prime_factor -lm  
* Script 101 - Write a function that prints an integer. Prototype: void print_number(int n); You can only use _putchar function to print. You are not allowed to use long. You are not allowed to use arrays or pointers. You are not allowed to hard-code special values.  


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

