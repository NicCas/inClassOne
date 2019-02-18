/*
 printf("Lecture 6:\n\n"); printf("Example 5:\n\n\n");
 */
#include <stdio.h>

void main() {

	 printf("Lecture 6:\n\n"); printf("Example 6:\n\n\n");

   FILE *fp;
   char buff[255];

   fp = fopen("textFile.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

}

