#ifdef HAVE_CONFIG_H
#include <config.h>
#endif /* HAVE_CONFIG_H */

#include <stdio.h>

int main(int argc, char **argv)
{
#ifdef WORDS_BIGENDIAN
  printf("Hello, Big Endian !\n");
#else
  printf("Hello, Little Endian !\n");
#endif
  return 0;
}
