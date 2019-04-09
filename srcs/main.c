/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/07 17:09:15 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 19:53:09 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../include/libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	av = NULL;
	ac = 0;
	printf("%s\n", ft_lltoa_base(-1000, 16));
	printf("%s\n", ft_lltoa(13));
	printf("%s\n", ft_itoa(-813));
	return (0);
}
