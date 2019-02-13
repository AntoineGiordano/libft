/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <agiordan@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/07 17:09:15 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/02/13 19:35:33 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"
#include "stdlib.h"

int main(int ac, char **av)
{
	ft_filereplace(av[1], ft_strdup("D"), ft_strdup("d"));
	return (0);
}
