#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this program return rand pas
 *
 * Return: 0
*/
int main (void)
{
        int sum;
        char c;
        
        srand(time(NULL));
        while (sum <= 2650)
        {
                c = rand() % 128; 
                sum += c;
                putchar(c);
        }
        putchar(2777 - sum);
        return (0);
}
