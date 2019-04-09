/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lltoa.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 20:39:44 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 16:31:42 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa(long long n)
{
	char	*str;
	char	*tmp;
	int		i;

	i = ft_nbrlen(n);
	if (!(str = ft_strnew(1 + i)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
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
