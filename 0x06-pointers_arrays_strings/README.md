this is readme file
x06-pointers_arrays_strings  

/**
 * *cap_string - function return capital string
 *
 * @ptr: pointer to char
 *
 * Return: ptr
*/
char *cap_string(char *ptr)
{
	int del = 1;

	while (*ptr)
	{
		if (is_delm(*ptr))
			del = 1;
		else if (is_lower(*ptr) && del)
		{
			*ptr -= 32;
			del = 0;
		}
		ptr++;
	}
	return (ptr);
}

In the second snippet, when you return ptr, you’re returning the pointer that has been incremented to the end of the string.
When you use this returned pointer outside the function, it points to memory that is no longer valid (since it’s beyond the original string).
This results in undefined behavior, which can manifest as errors, crashes, or unexpected behavior.
Solution:
To fix the second snippet, return the original pointer s (like in the first snippet) to ensure that you’re returning a valid pointer within the original string.
