#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{	
	char comm[50];
	strcpy(comm,"echo 'hi'");
	system(comm);
	printf("with proper grammar, but the outcome is a piece of art,\n");
	
	return (0);
}
