/**Exercise 1-1. Run the `` hello, world '' program on your system.
 ** Experiment w**ith leaving out parts of the program, to see what error messages you get.*/

#include<stdio.h>
main()
{
	printf("hello, ");
	printf("world");
	printf("\n");
}

/******Answers*****************
 *
 *
 * if we comment out #include<stdio.h> the prog compiles with fillowing warining
 *
 *Exercise1-1.c: In function ‘main’:
 Exercise1-1.c:7:2: warning: implicit declaration of function ‘printf’ [-Wimplicit-function-declaration]
   printf("hello, ");
     ^~~~~~
     Exercise1-1.c:7:2: warning: incompatible implicit declaration of built-in function ‘printf’
     Exercise1-1.c:7:2: note: include ‘<stdio.h>’ or provide a declaration of ‘printf’
     ***/


/*********If we comment main(),following error is seen
 *
 * Exercise1-1.c:6:1: error: expected identifier or ‘(’ before ‘{’ token
 *  {
 *   ^
 *   */


/*********if we miss semi colon,we will get following error
 *
 *
 *
 * Exercise1-1.c: In function ‘main’:
 * Exercise1-1.c:8:2: error: expected ‘;’ before ‘printf’
 *   printf("world");
 *   ***/


/***********Exercise 1-2. Experiment to find out what happens when prints 's argument string contains
 * \c, where c is some character not listed above.
 *
 *
 * Exercise1-1.c: In function ‘main’:
 * Exercise1-1.c:7:9: warning: unknown escape sequence: '\c'
 *   printf("hello\c, ");
 *            ^~~~~~~~~~~
 *            ***/
