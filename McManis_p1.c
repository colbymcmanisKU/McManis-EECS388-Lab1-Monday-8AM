/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int integer;
	int bit;
	int override;
	int overrideinteger;
	printf("Enter Integer:\n");
	scanf("%d", &integer);
	printf("Enter Bit:\n");
	scanf("%d", &bit);
	printf("Enter Override:\n");
	scanf("%d", &override);

//uses bitwise or to override the single integer with 1

//anything or with a zero is just whatever the bit it is being ored with
//anything or with a 1 becomes 1

	if (override == 1)
	{

		overrideinteger = integer | (1<<bit);


	}
	if (override == 0)
	{
//uses bitwise and to override a single bit of the integer  with a 0
//didn't use the bitwise not at first jsut used ! which did not give me the expectd result
//anything anded with a zero becomes 0
//anything anded with a 1 becomes whatever the other bit is
		overrideinteger = integer & ~(1<<bit);


	}
	printf("%d", overrideinteger);

	return 0;
}