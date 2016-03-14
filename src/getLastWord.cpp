/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str)
{
	int start = -1, end = -1, length, itr = 0;
	char *last;
	if (*str)//checking for NULL string
	{
		for (length = 0; str[length] != '\0'; length++);
		if (length == 1)//if length is 1,then returning that string
		{
			last = (char*)malloc(sizeof(char));
			last[itr] = str[0];
			itr++;
		}
		else
		{
			while (length>0)
			{
				if (str[length - 1] != 32 && end == -1)
				{
					end = length - 1;
				}
				else if (end != -1 && str[length - 1] == 32 || length - 1 == 0)
				{
					if (length - 1 == 0)
					{
						start = length - 1;
					}
					else
					{
						start = length;
					}
				}
				length--;
				if (start != -1 && end != -1)
				{
					break;
				}
			}
			last = (char*)malloc((end - start + 1)*sizeof(char));
			while (start <= end)
			{
				last[itr] = str[start];
				itr++;
				start++;
			}
		}
		last[itr] = '\0';
		return last;
	}
	else
	{
		last = (char*)malloc(sizeof(char));
		last[0] = '\0';
		return last;
	}
}
