#include <stdio.h>
#include <stdbool.h>
#define example_int "00:00"

int main()
{
	bool loop_stop = false;
	// to be honest I could not be doinked about having to make a thing that compares char's...
	// over enginering is my middle name!
	// also premium spaghetti
loop:
	for (int i = 0; i < 25; i++)
	{
		printf("-");
	}
	if (loop_stop == true)
	{
		goto end;
	}
	else
	{
		printf("\n| %s | %s | %s |\n", example_int, example_int, example_int);
		loop_stop = true;
		goto loop;
	}
end:
	return 0;
}
