/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tab2del.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/03/22 14:49:01 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/03/22 17:08:13 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_tab2del(void ***tab)
{
	int	i;

	if (!tab || !(*tab))
		return ;
	i = -1;
	while ((*tab)[++i])
		free((*tab)[i]);
	free(*tab);
	*tab = NULL;
}
