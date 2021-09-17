#include "lib.h"

int	main(void)
{
	size_t	moves;
	int		who_play;

	moves = 9;
	{
		while (moves > 0)
		{
			if ((moves % 2) == 1)
				who_play = 1;
			else
				who_play = 0;
			to_play(who_play, moves);
			moves--;
		}
	}
	return (0);
}
