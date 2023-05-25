#include <stdio.h>

// function "declaration"
void meow(int n);

int main(void)
{
    meow(3);
}


//function "creation"
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
    printf("meow\n");
    }
}