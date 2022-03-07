#pragma once

class Solution693
{
public:
	char GetBit(const size_t& pos, const int n)
	{
		return (n >> pos) & 1;
	}

	bool hasAlternatingBits(int n)
	{
		int copy = n;
		char bit = GetBit(1, copy);
		copy = copy >> 1;
		int i = 0;


		while (copy != 0)
		{
			if (bit == GetBit(i, copy))
				return false;

			copy = copy >> 1;
		}

		return true;
	}
};