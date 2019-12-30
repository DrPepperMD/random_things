#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#pragma once

char command[20];
bool exitprompt = false;

int commandinput()
{
  printf("usr@comprompt:~$ "); // so it looks cool
  scanf("%s", command);
  cmpcommand(command);
  return 0;
}

int cmpcommand(command)
{
  // this is moddable to high hell!
  if (strcmp(command, "foo") == 0)
    {
      system("ls /");
      return 0;
    }
  else if (strcmp(command, "bar") == 0)
    {
      system("ls /home/rjb");
      return 0;
    }
  // don't delete this otherwise you will be unable to exit this!
  else if (strcmp(command, "exit") == 0)
    {
      exitprompt = true;
    } 
  else
    {
      printf("command not found...\n");
      return 0;
    }
}
