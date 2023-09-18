#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "ohello, world";
    char *f = "o";
    unsigned int n;

    n = strspn(s, f);
    printf("%u\n", n);
    return (0);
}
/*
 * chhal mn herf f s kayn f f ila mal9itch kanhbs
 */
