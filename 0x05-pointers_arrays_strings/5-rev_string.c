
/**
 * rev_string - reverse a string
 *
 * @s: is a pointer  that points on a string
*/
void rev_string(char *s)
{
	int i, l;
	char x;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; i++)
	{
		x = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = x;
	}
}
