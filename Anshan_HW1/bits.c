#include "bits.h"

unsigned int BinaryMirror(unsigned int num)
{
	unsigned int ans = 0;
	short int count = 32;
	while(count != 0)
	{
		ans <<= 1;
		if(num & 1)
		{
			ans |= 1;
		}
		else
		{
			ans |= 0;
		}
		--count;
		num >>= 1;
	}
	return ans;
}

unsigned int SequenceCount(unsigned int num)
{
	short int count = 0;
	while(num != 0)
	{
		if((num & 3) == 2)
		{
			count++;
		}
		num >>= 1;
	}
	return count;
}
