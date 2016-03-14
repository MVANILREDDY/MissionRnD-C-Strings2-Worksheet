/*
OVERVIEW: Given a string, Count the number of consonants and vowels and copy them to 'consonants' and 'vowels' respectively
Notes : Neglect Space and Other Symbols .Consider Capital Letters too

E.g.: Input: "aB c" , Output: consonants should contain 2 and vowels 1

INPUTS: A string and two int pointers

OUTPUT: Modify the consonants and vowels pointers accordingly with their counts (*consonants=?? ;*vowels=??)

INPUT2: Dont Forget they are pointers ;consonants and vowels are addresses of two variables .

Output: consonants should be ??,vowels should be ??

??:Count them :)

NOTES: Don't create new string , Dont return anything ,you have been given two pointers ,copy values into those .
*/

#include <stddef.h>


void count_vowels_and_consonants(char *str,int *consonants, int *vowels)
{
	int i = 0;
	char check; //variable i is used for getting every character of string while traversing.
	*consonants = 0, *vowels = 0;
	if (str)
	{ 
		 while (str[i])
		{
			check = str[i];
			if (check <= 90 && check >= 65 || check <= 122 && check >= 95)
			{

				if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u' || check == 'A' || check == 'E' || check == 'I' || check == 'O' || check == 'U')
					++*vowels;
				else
				{
					++*consonants;
				}
			}
			  i++;
		}
    }
}
