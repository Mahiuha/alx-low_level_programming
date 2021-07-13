# What I learned from this project  
At the end of this project you are expected to be able to explain to anyone, without the help of Google:  
---   

**What is the difference between automatic and dynamic allocation?**  
*automatic- when you declare a variable or use a double quote string, the computer handles the memory allocation
dynamic allocation is when we do not know the size and we need to use malloc. we do not know in advance hoe much memory we need and we will only know how much at runtime during compilation. in this case we use dynamic. 
be default, when using automatic allocation, the program reserves space for variables and uses them. It reads and writes and when the program leaves the function, the memory used for those variables are released. String literals are a special case. The string is only readable and not writeable. we get seg faults if we try and access strings. the memory is not released when the function returns.*  

**What is malloc and free and how to use them?**  
*Malloc allocates size bytes and returns a pointer to the allocated memory and the memory is not initialized. Free is when allocated memory is not needed anymore. We need to give it back to the OS calling free.
void free (void \*ptr). the free will free up the memory space of ptr. ptr was previousky returned by malloc, calloc, or realloc. never trust malloc. sometimes it fails. on error malloc returns NULL. check its return value. need an if case if it is null and return an error. the memory pointer returned has read and write permissions. sizeof is best because different machines (good for portability).  malloc does not automatically release memory
The thing about free is you have to handle all the memory yourself. You need to track all the addresses inside a variable of type pointer. You need to deallocate all the memory space. If you dont then the program runs out of memory and the OS kills the program.*  

**Why and when use malloc?**  
*malloc allocates a certain amount of memory during execution of a program. it will request a block of memory from the heap. if the request is granted then the OS will reserve the amount of memory and malloc returns a pointer to the reserved space. This is useful when we dont know what size our variables are and if we need to constantly be chanig due to different inputs.*  

**How to use valgrind to check for memory leak?**  
*Valgrind is a tool used mainly for memory debugging, memory leak detection, and profiling. This is crucial for big and complex programs. always aim for all heap blocks were freed. no leaks are possible. on error, malloc returns NULL. always check the return value of malloc before using it. Or else seg. fault.*  

*string literals and .rodata. extra info. not part of this project.*  

## Each scripts and their output  
* Script 0 - Write a function that creates an array of chars, and initializes it with a specific char.  
* Script 1 - Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.  
* Script 2 - Write a function that concatenates two strings.  
* Script 3 - Write a function that returns a pointer to a 2 dimensional array of integers.  
* Script 4 - Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.  
* Script 5 - Write a function that concatenates all the arguments of your program.  
* Script 100 - Write a function that splits a string into words.  
