#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int a = 10;
  void *ptr = &a;
  printf("void* ptr is %p\n", ptr);
  printf("a address is %p\n", &a);
  printf("a is %d\n", *(int *)ptr);
  printf("int * is %p\n", (int *)ptr);

  return EXIT_SUCCESS;
}
