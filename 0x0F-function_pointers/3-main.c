#include "3-calc.h"
/**
 * main - performs simple operations
 *
 * @argv: pointer to the argument that enter from the user as char type
 * @argc: tell us the amount of arguments int type
 *
 * Return: an integer with the result of a operation
 */
int main(int argc, char *argv[])
{
	int (*funoperator)(int a, int b);
	/* when the user enter the arguments there´s must be four elements */
	/* the name of the file + first number + operator + second number */
	/* follow first condition of the task */
	/* if the number or arguments is wrong, print error */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* funoperator is gonna be equal to the pointer function */
	/* in the argument number 2 that is the position of the operator */
	/*if is not one of the operators mentioned else print Error */
	funoperator = get_op_func(argv[2]);
	if (!funoperator || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}
	/* add last condition, if user try to divides using % or / is Error */
	/* that means, if *argv in position 2 that are operators */
	/* receives % or / operators program prints Error */
	/* AND if user is trying to divided by 0 is Error too */
	/* e.g 2  % 0 , if argv in position 3is equal to cero is Error */
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	/* if any of the conditions theeennn : */
	printf("%d\n", funoperator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
