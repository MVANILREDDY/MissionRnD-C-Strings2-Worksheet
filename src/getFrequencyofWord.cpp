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
	int length, w_indx = 0, s_indx = 0, check = 0, x = -1, count = 0;
	for (length = 0; word[length] != '\0'; length++);
	if (str&&word)
	{
		while (str[s_indx]) //s_indx & w_indx are used for traversing given string and word.
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
				x = s_indx;//x is used to store char of given string where mismatch occurs with given word.
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

int word_count_recursion(char*, char*, int, int, int);//recursive function to find frequency of word in a given string.
int count_word_int_str_way_2_recursion(char *str, char *word)
{
	int s_length, w_indx = 0, s_indx = 0, w_length, count = 0;
	for (w_length = 0; word[w_length] != '\0'; w_length++);//w_length is for word length.
	for (s_length = 0; str[s_length] != '\0'; s_length++);//s_length is for string length.
	if (str&&word)
	{
		count = word_count_recursion(str, word, s_length, w_length, s_indx);
		return count;
	}
	else
	{
		return 0;
	}

}
int word_count_recursion(char*str, char*word, int s_length, int w_length, int s_indx)
{
	int flag = 1, i;
	if (s_indx <= (s_length - w_length))//s_indx is used for traversing given string.
	{
		for (i = 0; i<w_length; i++)
		{
			if (str[s_indx + i] == word[i])
				flag = flag && 1;
			else
				flag = flag && 0;
		}
		s_indx++;
		return flag + word_count_recursion(str, word, s_length, w_length, s_indx);//calling function recursively.
	}
	else
	{
		return 0;
	}
}


