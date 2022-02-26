
#include "libft.h"

//	Switch the string in a long variable
long int	ft_atol(char	*string)
{
	long int	retour;
	int			i;
	int			negative;

	negative = 1;
	i = 0;
	retour = 0;
	if (string[i] == '-')
	{
		negative = -1;
		i++;
	}
	while (string[i] != '\0')
		retour = retour * 10 + (string[i++] - 48);
	return (retour * negative);
}