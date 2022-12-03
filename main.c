#include "nain.h"

int main(void)
{
	char seed[65];

	init(seed);
	board(seed);
	while(1)
	{
		_play(seed);
		board(seed);
	}

	return (0);
}

