#include "lib.h"

int	to_play(int who_play, int moves)
{
	char	*space;
	int		index;

	while (index < 9)
	{
		space[index] = 0;
		index++;
	}
	if (who_play == 1)
	{
		scanf("Time of PlayerX: %d", local);
		if (space[local] == 0)
		{
			printf("Please, play again. This space is already ocupated.");
			to_play(who_play, moves);
		}
		if (space[local] == 1)
		{
			space[local] == 'X';
		}
		return (1);
	}
	if (who_play == 0)
	{
		scanf("Time of PlayerX: %d", local);
		if (space[local] == 0)
		{
			printf("Please, play again. This space is already ocupated.");
			to_play(who_play, moves);
		}
		if (space[local] == 1)
		{
			space[local] == '0';
		}
		return (1);
	}
	return (who_play + 1);
}
