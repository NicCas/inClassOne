/*
 printf("Lecture 5:\n\n"); printf("Example 9:\n\n\n");
 */

#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {
	printf("Lecture 5:\n\n"); printf("Example 12:\n\n\n");

   union Data data;

   data.i = 10;
   printf( "data.i : %d\n", data.i);

   data.f = 220.5;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "C Programming");
   printf( "data.str : %s\n", data.str);

   return 0;
}
