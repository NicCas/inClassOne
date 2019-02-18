/*
 printf("Lecture 5:\n\n"); printf("Example 9:\n\n\n");
 */

#include <stdio.h>
#include <string.h>

//size allocated is 20 bytes. Regardless of which data you use. This way computer can change it at runtime
union Data {
   int i;  //4 bytes
   float f; //4 bytes
   char str[20];  //20 bytes
};

int main( ) {

	printf("Lecture 5:\n\n");
	printf("Example 10:\n\n\n");

   union Data data;

   printf( "Memory size occupied by data : %d\n", sizeof(data));

   return 0;
}
