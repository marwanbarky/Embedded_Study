/**************************************************************************************************
 Name        : ex20.c
 Author      : Mohamed Tarek
 Description : Assignment 1 - Ex 20
 **************************************************************************************************/

#include <stdio.h>

int main(void)
{
	int i, row_num, rows_cols;

	printf("Enter number of rows_cols: ");
    scanf("%d",&rows_cols);
    printf("\n");

	/* Loop for each row */
	for(row_num = 0;row_num < rows_cols;row_num++)
	{
		/* print the spaces on the left */
		for(i=row_num;i<rows_cols-1;i++) printf(" ");

		/* print the stars, number of stars in each row = ((2 * Row Number) + 1) */
		for(i=0;i<((2*row_num)+1);i++) printf("*");

		printf("\n");
	}
	return 0;
}
