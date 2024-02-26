#include "main.h"
/**
 * infinite_add - a function that add nummbers in a string
 * @n1 : input number 1
 * @n2 : input  number string 2
 * Return: give back added string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, carry, len1, len2;
	carry = len1 = len2 = 0;
	//leng of n1 and n2
	
	while (n1[len1] != '\0')
	{
		len1++;
	}

	while (n2[len2] != '\0')
	{
		len2++;
	}
	
	i = len1 - 1;
	j = len2 -1;
	k =size_r - 1;
	//adding right to left
	while (i >= 0 || j >= 0)
	{
		int sum = carry;

		if (i >= 0)
		{
			sum += n1[i] - '0';
			i--;
		}
		
		if (j >= 0)
		{
			sum += n2[j] - '0';
			j--;
		}
		if (k < 1)
		{
			return (1);
		}

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k--;
	}
	//if there is still a carry
	if (carry > 0)
	{
		if (k < 0){
			return (1);
		}
		r[k] = carry;

	else
		//shift result one position to left
		for (i = 0; i < size_r - 1; i++)
		{
			r[i] = r[i + 1];
		}
	}
	return (r);
}


