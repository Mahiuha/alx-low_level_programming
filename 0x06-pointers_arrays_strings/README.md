# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What are pointers to pointers and how to use them?***   
*Pointers to pointers are like \*\*pointer. If we have a list of chars (a string) we can use the pointer to the char. But we can also want a list of words, a sentence so we can use char \*\*sentence. or a list of sentences like \*\*\*story. Use \*\* when you want to preserve the memory allocation or assignment outside of a function call. char \*ch has the address of only the single first character and \*ch will dereference that char. But char \*\*ch will be the address of an array of character pointers. So multi-level stuff.*  

**What are multidimensional arrays and how to use them?**  
*An array of arrays. Increasing the number of dimensions means more data can be held but harder to manage. Most common are 1D or 2D arrays and they are used like matrices.*   

**What are the most common C standard library functions to manipulate strings?**   
*https://en.wikibooks.org/wiki/C_Programming/String_manipulation strcat, strchr, ctrcmp, strcpy, strlen, strncat, strncmp, strncpy, strchr. Learn the string.h header.*  

## Each scripts and their output  
* Script 0 - Write a function that fills memory with a constant byte.Prototype: char *_memset(char *s, char b, unsigned int n); The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b. Returns a pointer to the memory area s.   
* Script 1 - Write a function that copies memory area.Prototype: char *_memcpy(char *dest, char *src, unsigned int n); The _memcpy() function copies n bytes from memory area src to memory area dest. Returns a pointer to dest.    
* Script 2 - Write a function that locates a character in a string.Write a function that locates a character in a string. Prototype: char *_strchr(char *s, char c); Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found.   
* Script 3 - Write a function that gets the length of a prefix substring.Write a function that gets the length of a prefix substring. Prototype: unsigned int _strspn(char *s, char *accept); Returns the number of bytes in the initial segment of s which consist only of bytes from accept.   
* Script 4 - Write a function that searches a string for any of a set of bytes.Write a function that searches a string for any of a set of bytes. Prototype: char *_strpbrk(char *s, char *accept); The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found.   
* Script 5 - Write a function that locates a substring. Write a function that locates a substring. Prototype: char *_strstr(char *haystack, char *needle); The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.   
* Script 7 - Write a function that prints the chessboard. Prototype: void print_chessboard(char (*a)[8]);   
* Script 8 - Write a function that prints the sum of the two diagonals of a square matrix of integers. Prototype: void print_diagsums(int *a, int size); Format: see example. You are allowed to use the standard library.  
* Script 9 - Write a function that sets the value of a pointer to a char. Prototype: void set_string(char \**s, char *to);   
* Script 101 - Create a file that contains the password for the crackme2 executable. Your file should contain the exact password, no new line, no extra space. ltrace, ldd, gdb and objdump can help. You may need to install the openssl library to run the crakme2 program: sudo apt-get install libssl-dev.   

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
