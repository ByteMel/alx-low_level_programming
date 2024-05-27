#include<stdio.h>

/**
 * myStartFun - Apply the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myStartFun(void) __attribute__ ((constructor));

/**
 * myStartFun - implementation of myStartupFun
 */
void myStartFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
