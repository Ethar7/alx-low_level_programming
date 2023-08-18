
/**
 * rev_string - reverse a string
 *
 * @s: is a pointer  that points on a string
*/
void rev_string(char *s)
{
	int i, l = 0;
	char x;

	while (s[l] != '\0')
		++l;
	for (i = 1; i <= l / 2; i++)
	{
		x = s[i];
		s[i] = s[l - i];
		s[l - i] = x;
	}
}