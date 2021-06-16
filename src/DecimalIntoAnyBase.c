/*
 ============================================================================
 Name        : BinaryIntoAnyBase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char reverse(char *x, int begin, int end)
{
   char c;

   if (begin >= end)
      return;

   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;

   reverse(x, ++begin, --end);
}

int main(void) {

	int target_base = 5;
	int starting_number = 68;
	char string_result[5];


	int quotient = starting_number;

	while (quotient != 0) {

		int remainder = quotient % target_base;

		quotient = quotient / target_base;

		printf("the quotient is %d\n",quotient);
		printf("the remainder is %d\n",remainder);

		char string_third_remainder[5];
		sprintf(string_third_remainder, "%d", remainder);
		strcat(string_result, string_third_remainder);


	}

	reverse(string_result, 0, strlen(string_result)-1);

	printf("the final answer is %s\n", string_result);

	return EXIT_SUCCESS;

}
