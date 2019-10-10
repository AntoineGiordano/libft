/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/07 17:09:15 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/05/30 17:50:43 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "include/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int		i;
	int		len;
	int		tmp;
	char	*str;

	ac = 0;
	i = -1;
	len = 50;
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (1);
	while (++i < len)
		str[i] = 'A';
	str[i] = '\0';
	i = -1;
	while (++i < 50000000)
	{
		if (ft_atoi(av[1]) == 1)
			tmp = ft_strlen(str);
		else
			tmp = ft_strlenbin((unsigned long long *)str);
	}
	return (0);
}
