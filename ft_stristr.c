/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/04 20:53:56 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2018/10/04 20:53:57 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_stristr(char *str, char *tofind)
{
	int	i;
	int	savei;

	i = -1;
	while (str[++i])
	{
		savei = i;
		while (str[i] == tofind[i])
			if (!tofind[i++])
				return (savei);
		i = savei;
	}
	return (-1);
}
