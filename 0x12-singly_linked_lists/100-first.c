#include <stdio.h>

void __attribute__((constructor)) race_tale(void);

/**
 * race_tale - Prints a string before the main function is executed.
 */
void race_tale(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

