#include <sys/stat.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

  struct stat alf;
  stat("file.txt", &alf);
  
  printf("file size: %lld\n", alf.st_size);
  printf("mode: %o\n", alf.st_mode); 
  printf("last access time: %s\n", ctime(&(alf.st_atime)));


  return 0;
}
