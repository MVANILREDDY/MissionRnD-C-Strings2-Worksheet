/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word)
{
	int length, w_indx = 0, s_indx = 0, check = 0, x = -1, y = -1, count = 0;
	for (length = 0; word[length] != '\0'; length++);
	if (str&&word)
	{

		while (str[s_indx])
		{
			if (str[s_indx] == word[w_indx])
			{
				check++;
				w_indx++;
				s_indx++;
				if (check == length)//check value is find to word in given string.
				{
					x++;
					s_indx = x;
					check = 0;
					count++;
				}
			}
			else
			{
				x = s_indx;
				s_indx++;
				check = 0;
				w_indx = 0;
			}

		}
		return count;
	}
	else
	{
		return 0;
	}
}


/*int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}*/

