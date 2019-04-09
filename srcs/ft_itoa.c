/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 20:39:44 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 16:32:06 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	init_itoa(int *n, int *i, char **str)
{
	*i = ft_nbrlen(*n);
	if (!(*str = ft_strnew(1 + *i)))
		return (0);
	if (*n == -2147483648)
	{
		(*str)[(*i)--] = '8';
		*n = -214748364;
	}
	if (*n < 0)
	{
		*n *= -1;
		(*str)[0] = '-';
	}
	return (1);
}

char		*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	int		i;

	if (!init_itoa(&n, &i, &str))
		return (NULL);
	while (i > 0)
	{
		str[i--] = n % 10 + '0';
		n = (n - n % 10) / 10;
	}
	if (str[0] != '-')
	{
		tmp = str;
		str = ft_strsub(str, 1, ft_strlen(str + 1));
		ft_strdel(&tmp);
	}
	return (str);
}
