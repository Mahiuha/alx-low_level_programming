# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**How to use arguments passed to your program?**  
*int main(int argc, char \*argv[]); Exit of 0 is a success to host environment and any other value is a failure. argc  counts the number of arguments and the second is an array of pointers of those arguments. argv is used to refer to an array of strings and its declaration of char \*argv[] is the same as \*\*argv. argc must be more than 0. argv[argc] is a null pointer. argv[0] torough argv[argc-1] are pointers to strings. arg[0] is a string containing the programs name or a null string. the rest of argv represent the arguments passed to program. Use loops to decrement argc and print an argv++.*  

**What are two prototypes of main that you know of, and in which case do you use one or the other?**  
*int main (void) and int main(int argc, char \*\*argv).*   
*use int main void when no arguments or parameters. argc is argument count. argv is the argument vector. vectors are 1d arrays. argv is a 1d array of strings. each string is 1 of the arguments that was passed to the program.* 
*So doing something like gcc -o food food.c is essentially: argc is 4. argv[0] is gcc, argv[1] is -o, argv[2] is food, and argv[3] is food.c. use the other one from now cause we aint gonna make that basic ship no mo.*  

**How to use \_\_attribute\_\_((unused)) or (void) to compile functions with unused variables or parameters?**  
*(void) means there are no parameters. (void) variables might work for some compilers. An example is*  

void foo(int \_\_attribute\_\_((\_\_unused\_\_)) bar) {
    ...
}

*We can also use #pragma unused <variable>, so we have "int main(void \*ptr)" and that can also avoid warnings from compiler if some parameters are unused.*    
    
*WHY DO WE EVEN NEED TO DO THIS!?!? because when we use external APIs, then we might not use their parameter and we need to unused or void it. if we just used the parameter later like just writing ptr; this still throws warnings into the gcc so we need the void cast. it tells the compiler unambiguously and explicitly that the statement like ptr; will have no effect at all.*  

## Each scripts and their output  
* Script 0 - Write a program that prints its name, followed by a new line.  
* Script 1 - Write a program that prints the number of arguments passed into it.  
* Script 2 - Write a program that prints all arguments it receives.  
* Script 3 - Write a program that multiplies two numbers.  
* Script 4 - Write a program that adds positive numbers.  
* Script 100 - Write a program that prints the minimum number of coins to make change for an amount of money.  

