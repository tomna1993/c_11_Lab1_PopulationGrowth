#include <stdio.h>
#include <cs50.c>

int main(void)
{
	/* Ask user input for
	Start size: 
	End size: */
	int startSize = get_int("Start size: ");
	int endSize = get_int("End size: ");

	// Calculate growth in years
	int yearsOfGrowth = 0;

	if(startSize > endSize)
	{
		printf("The llama population is already reached your expected number.");
	}

	if (startSize == endSize)
	{
		yearsOfGrowth = 0;
	}
	
	if (startSize < endSize)
	{
		do
		{
			startSize = startSize + startSize / 3 - startSize / 4;

			yearsOfGrowth++;

		} while (endSize > startSize);
	}

	// Output result

	printf("Years: %i", yearsOfGrowth);
}