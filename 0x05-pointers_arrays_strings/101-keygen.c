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
        while (sum <= 2645)// random to this num
        {
                c = rand() % 128; //insure c in range of ascii characters 0 - 127
                sum += c;
                putchar(c);
        }
        putchar(2772 - sum);//this range of sum + 127 = 2772
        return (0);
}
