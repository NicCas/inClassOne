#include <stdio.h>

int A;
int B;

int fun()
{
  static int count = 0; //Static Variable
  count++;
  return count;
}

int Add()
{
    return A + B;
}

int main () {

	printf("Lecture 5:\n");
	printf("Example 4:\n");

	int answer; // Local variable
	A = 5;
	    B = 7;
	    answer = Add();
	    printf("%d\n",answer);
	    printf("%d ", fun());
	    printf("%d ", fun());
	    return 0;

}
