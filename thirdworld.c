#include <stdio.h>
#include <stdlib.h>

#define STATUS_SUCCESS 0

int main(int argc, char *argv)
{
	int ncount = 0;
	int i;
	
	for (i = 0; i < 5; i++) {
		printf (" %d \n", (i + 10));
	}
	
	// Adding new line of comment
	// adding 2nd line of comment for new commit.
	printf ("hello world\n");
	
	return STATUS_SUCCESS;
}
