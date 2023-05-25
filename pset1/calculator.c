#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Para resultados mayores a 4 billones o menores a -4 billones, utilizamos long, sino int
    long x = get_long("x: ");
    long y = get_long("y: ");
    printf("%li\n", x + y);
}