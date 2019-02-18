/*
 printf("Lecture 6:\n\n"); printf("Example 1:\n\n\n");
 */

#include <stdio.h>
int main( ) {

	printf("Lecture 6:\n\n"); printf("Example 3:\n\n\n");

   char str[100];       //char array STRING used as buffer

   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   gets( str );

   printf( "\nYou entered: ");
   puts( str );

   return 0;
}
