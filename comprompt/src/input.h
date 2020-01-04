#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "misc.h"
#pragma once

// Whats nessecariy(? I can't spell :P) to make a functional prompt that is simple enough for a 3 year old

// Your command
char command[20];

// To be honest, if your username is longer than 3 characters and isn't you initials, whats the point?
char usrname[10];
char *usrnameptr = usrname;

bool exitprompt = false;

int getusr()
{
  // function to get user name for prompt, to be called in main or any other file that utilize this
  usrnameptr = getenv("USER");
  return 0;
}

int commandinput()
{
  printf("%s@comprompt:~$ ", usrname); // so it looks cool
  scanf("%s", command);
  cmpcommand(command);
  return 0;
}

int cmpcommand(command)
{
  // These can be edited to whatever you want
  if (strcmp(command, "foo") == 0)
    {
      system("ls /");
    }
  else if (strcmp(command, "bar") == 0)
    {
      system("ls ~");
    }
  else if (strcmp(command, "foobar") == 0)
    {
      system("ls ~/ -R");
    }
  // These however cannot otherwise bad things will happen
  else if (strcmp(command, "help") == 0)
    {
      // Oh may our lord and saviour External Function To Hide The Bloat save us!
      
    }
  else if (strcmp(command, "exit") == 0)
    {
      exitprompt = true;
    } 
  else
    {
      // Default result, simple error message with a cute beep
      printf("command not found...\n\a");
      return 0;
    }
}
