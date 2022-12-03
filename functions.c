#include "nain.h"

int init(char *seed)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if((i % 2 == 0 && i < 8) || ((i + 1) % 2 == 0 && i > 7))
			seed[i] = 'A';
		else
			seed[i] = ' ';
	}

	for (; i < 48; i++)
		seed[i] = ' ';

	for (; i < 64; i++)
	{
		if((i % 2 == 0 && i < 56) || ((i + 1) % 2 == 0 && i > 55))
			seed[i] = 'B';
		else
			seed[i] = ' ';
	}

	seed[i] = '\0';
	return (0);
}

int board(char *seed)
{
printf("  0|1|2|3|4|5|6||7  \n");
printf("0|%c|%c|%c|%c|%c|%c|%c|%c|0\n", seed[0], seed[1], seed[2], seed[3], seed[4], seed[5], seed[6], seed[7]);
printf("1|%c|%c|%c|%c|%c|%c|%c|%c|1\n", seed[8], seed[9], seed[10], seed[11], seed[12], seed[13], seed[14], seed[15]);
printf("2|%c|%c|%c|%c|%c|%c|%c|%c|2\n", seed[16], seed[17], seed[18], seed[19], seed[20], seed[21], seed[22], seed[23]);
printf("3|%c|%c|%c|%c|%c|%c|%c|%c|3\n", seed[24], seed[25], seed[26], seed[27], seed[28], seed[29], seed[30], seed[31]);
printf("4|%c|%c|%c|%c|%c|%c|%c|%c|4\n", seed[32], seed[33], seed[34], seed[35], seed[36], seed[37], seed[38], seed[39]);
printf("5|%c|%c|%c|%c|%c|%c|%c|%c|5\n", seed[40], seed[41], seed[42], seed[43], seed[44], seed[45], seed[46], seed[47]);
printf("6|%c|%c|%c|%c|%c|%c|%c|%c|6\n", seed[48], seed[49], seed[50], seed[51], seed[52], seed[53], seed[54], seed[55]);
printf("7|%c|%c|%c|%c|%c|%c|%c|%c|7\n", seed[56], seed[57], seed[58], seed[59], seed[60], seed[61], seed[62], seed[63]);
printf("  0|1|2|3|4|5|6||7  \n");

return (0);
}

int _play(char *seed)
{
	int c, d;
	int source, dest;

	printf("Enter the location of your piece to move i.e 07 for row\n");
	scanf("%d%d", &c, &d);
	if (c > 7 || d > 7)
	{
		printf("Incorrect Cell, re-enter location");
		scanf("%d%d", &c, &d);
	}
	source = (c * 8) + d;
	printf("Enter the location to move to\n");
	scanf("%d%d", &c, &d);
	if (c > 7 || d > 7)
	{
		printf("Incorrect Cell, re-enter location");
		scanf("%d%d", &c, &d);
	}
	dest = (c * 8) + d;

	_move(seed, source, dest);

	return (0);
}

int _move(char *seed, int source, int dest)
{
	char c;

	c = seed[source];
	seed[source] = ' ';
	seed[dest] = c;

	return (0);
}
