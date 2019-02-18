/*
 printf("Lecture 6:\n\n"); printf("Example 3:\n\n\n");
 */
#include <stdio.h>
int main( ) {

	printf("Lecture 6:\n\n"); printf("Example 4:\n\n\n");

   char str[100];
   int i;

   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   scanf("%s %d", str, &i);

   printf( "\nYou entered: %s %d ", str, i);

   return 0;
}
