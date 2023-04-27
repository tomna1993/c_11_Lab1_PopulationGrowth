#include <stdio.h>
#include <cs50.c>

int calculateGrowthInYears(int start, int end);

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
	} while (startSize < 9);
	
	do
	{
		endSize = get_int("End size: ");	
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
		startNum = startNum + startNum / 3 - startNum / 4;

		n++;

	} while (endNum > startNum);

	return n;
}