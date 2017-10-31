#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

int main(){

  struct stat alf;
  stat("file", &alf);
  
  printf("file size: %lu\n", sizeof(alf.st_size));
  printf("mode: %d\n", alf.st_mode);
  printf("last access time: %s\n", ctime(alf.st_atime));




}
