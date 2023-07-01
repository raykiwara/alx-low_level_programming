#include <stdio.h>
/**
 * myStartupFun - executes before main
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * myStartupFun - implementation of function
 */
void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
