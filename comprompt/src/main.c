#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "input.h"

int main()
{
  system("clear");
  getusr();
  for (;;)
    {
      if (exitprompt == false)
	{
	  commandinput();
	}
      else
	return 0;
    }
}
