/*
 printf("Lecture 6:\n\n"); printf("Example 5:\n\n\n");
 */
#include <stdio.h>

int main() {
	printf("Lecture 6:\n\n"); printf("Example 5:\n\n\n");

   FILE *fp;        //pointer to a file type

   fp = fopen("textFile.txt", "w+");
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);
   fclose(fp);
   return 0;
}
