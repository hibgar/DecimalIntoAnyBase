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
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int target_base = 5;
	int starting_number = 68;

//	int first_quotient = starting_number / target_base;
//	int first_remainder = starting_number % target_base;
//	//printf("the result is %d",first_quotient);
//	//printf("the result is %d",first_remainder);
//
//	int integer_result = first_remainder;
//	char string_result[5];
//	sprintf(string_result, "%d", integer_result);
//
//	int remainder = first_remainder;

	int quotient = starting_number;

	while (quotient != 0) {
		quotient = quotient / target_base;
	//	int remainder = first_quotient % target_base;
//		printf("the result is %d\n",next_quotient);
//	//	printf("the remainder is %d\n",remainder);
//
//		char string_third_remainder[5];
//		//sprintf(string_third_remainder, "%d", remainder);
//		strcat(string_result, string_third_remainder);
//
//		printf("the answer unreversed is %s\n", string_result);
	}


	/*
	int second_quotient = first_quotient / target_base;
	int second_remainder = first_quotient % target_base;
	printf("the result is %d\n",second_quotient);
	printf("the remainder is %d\n",second_remainder);

	char string_second_remainder[5];
	sprintf(string_second_remainder, "%d", second_remainder);
	strcat(string_result, string_second_remainder);

	printf("two digits unreversed is %s\n", string_result);


	int third_quotient = second_quotient / target_base;
	int third_remainder = second_quotient % target_base;
	printf("the result is %d\n",third_quotient);
	printf("the remainder is %d\n",third_remainder);

	char string_third_remainder[5];
	sprintf(string_third_remainder, "%d", third_remainder);
	strcat(string_result, string_third_remainder);

	printf("the answer unreversed is %s\n", string_result);
*/

//	reverse(string_result, 0, strlen(string_result)-1);
//
//	printf("the final answer is %s\n", string_result);


	return EXIT_SUCCESS;

}
