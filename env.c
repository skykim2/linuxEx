#include  <stdio.h>
#include  <stdlib.h>

extern char **environ;

int main()
{
setenv("MYDIR", "/home/pi", 0);
setenv("KERNEL_SRC"," /usr/src/linux", 0);
printf("FILEDIR = %s\n", getenv("FILEDIR"));
printf("KERNEL_SRC = %s\n", getenv("KERNL_SRC"));
/*while(* environ)
  printf("%s\n", environ++);*/
   return 0;
