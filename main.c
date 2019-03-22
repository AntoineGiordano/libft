/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/07 17:09:15 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/22 16:10:45 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "stdlib.h"

int	main(int ac, char **av)
{
	char	**tab;

	av = NULL;
	ac = 0;
	tab = ft_tabnew(5, 2);
	tab[0][0] = 'g';
	tab[4][1] = 'f';
	printf("%p\n", tab);
	printf("%p\n", tab[0]);
	printf("%p\n", tab[1]);
	printf("%p\n", tab[2]);
	printf("%p\n", tab[3]);
	printf("%p\n", tab[4]);
	
	ft_tab2del((void ***)(&tab));
	printf("%p\n", tab);
	if (tab)
	{
		printf("%p\n", tab[0]);
		printf("%p\n", tab[1]);
		printf("%p\n", tab[2]);
		printf("%p\n", tab[3]);
		printf("%p\n", tab[4]);
	}
	return (0);
}
