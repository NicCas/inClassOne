#include <stdio.h>

int main () {

	printf("Lecture 5:\n");
	printf("Example 1:\n");
   /* local variable definition */
   int a = 100;

   /* check the boolean condition */
   if( a == 10 ) {
      /* if condition is true then print the following */
      printf("Value of a is 10\n" );
   } else if( a == 20 ) {
      /* if else if condition is true */
      printf("Value of a is 20\n" );
   } else if( a == 30 ) {
      /* if else if condition is true  */
      printf("Value of a is 30\n" );
   } else {
      /* if none of the conditions is true */
      printf("None of the values are matching\n" );
   }

   printf("Exact value of a is: %d\n\n", a );


   printf("Example 2:\n");
   int c , d;
   c = 10;
   printf( "Value of d is %d\n", (c == 1) ? 20: 30 );
   printf( "Value of d is %d\n\n", (c == 10) ? 20: 30 );

   return 0;
}
