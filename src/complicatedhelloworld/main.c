#include <stdio.h>
#include <string.h>
int main()
{
  FILE *fp;
  char hello[20] = "Hello world!";
  
  printf("Creating file...\n");
  fp = fopen("/home/rjb/Desktop/Hello.txt", "w");
  
  printf("Writing to file...\n");
  fprintf(fp, "%s", hello);
  printf("Writing complete, closing file...\n");
  fclose(fp);
}
