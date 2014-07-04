#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#include "server.h"
#include "client.h"

int main(int argc, char **argv)
{
   init();
   app();
   end();
   return EXIT_SUCCESS;
};
