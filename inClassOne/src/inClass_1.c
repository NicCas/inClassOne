/*
 printf("Lecture 6:\n\n"); printf("Example 1:\n\n\n");
 */

#include <stdio.h>  //standard input output built into c library

typedef int number;

 int main() {
	 printf("Lecture 6:\n\n"); printf("Example 2:\n\n\n");

   number c;
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   c = getchar( );

   printf( "\nYou entered: ");
   putchar( c );

   return 0;
}
