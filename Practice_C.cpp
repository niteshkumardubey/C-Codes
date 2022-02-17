#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include "external_definitions.c"

int main() 
{
	extern int i;
	printf("Value of external variable is: %d\n",i);
    return ;
    printf("Nitesh %d", i);
}
