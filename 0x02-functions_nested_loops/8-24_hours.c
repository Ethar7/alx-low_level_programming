#include "main.h"
/**
 * jack_bauer - function that counts hours and minuites
 *
 *
*/
void jack_bauer(void)
{
	for (int hr = 0; hr <= 23; hr++)
	{
	for (int min = 0; min <= 59; min++)
	{
		_putchar((hr \ 10) + 48);
		_putchar((hr % 10) + 48);
		_putchar(':');
		_putchar((min \ 10) + 48);
		_putchar((min % 10) + 48);
        }
	_putchar('\n');
    }
}
