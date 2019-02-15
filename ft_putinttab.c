/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putinttab.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
<<<<<<< HEAD:ft_intput.c
/*   By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/13 18:34:15 by gmonacho     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/15 15:31:04 by agiordan    ###    #+. /#+    ###.fr     */
=======
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/02/15 17:05:55 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/15 17:06:06 by agiordan    ###    #+. /#+    ###.fr     */
>>>>>>> refs/remotes/origin/master:ft_putinttab.c
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_putinttab(int *tab, size_t len)
{
	int	i;

	i = 0;
	while (i < (int)len)
	{
		ft_putnbr(tab[i++]);
		ft_putchar('\n');
	}
}
