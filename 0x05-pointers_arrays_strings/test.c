#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i = 0;
	for (i = 1 ;i < ac; i++)
		printf("%d \n",atoi(av[i]));
}
