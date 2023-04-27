#include <stdio.h>
#include <cs50.c>

int calculateGrowthInYears(int startNum, int endNum);

int main(void)
{
	/* Ask user input for
	Start size: 
	End size: */
	int startSize;
	int endSize;

	do
	{
		startSize = get_int("Start size: ");

		if(startSize < 9)
		{
			printf("Your llamas population will stagnate under 9 llamas. Buy more!\n");
		}
	} while (startSize < 9);
	
	do
	{
		endSize = get_int("End size: ");	

		if(endSize <= startSize)
		{
			printf("You already reach the given llamas population. Give another number!\n");
		}
	} while (endSize <= startSize);
	

	// Calculate growth in years
	int yearsOfGrowth = 0;
	
	yearsOfGrowth = calculateGrowthInYears(startSize, endSize);
	

	// Output result
	printf("Years: %i", yearsOfGrowth);
}

int calculateGrowthInYears(int startNum, int endNum)
{
	int n = 0;
	do
	{
		startNum = startNum + (startNum / 3) - (startNum / 4);

		n++;

	} while (endNum > startNum);

	return n;
}