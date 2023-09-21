/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkhemat <arkhemat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:13:34 by arkhemat          #+#    #+#             */
/*   Updated: 2023/08/14 17:32:03 by arkhemat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;
	int	i;

	fac = 1;
	i = 1;

	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb <= 1)
		return (1);
	while (i <= nb)
	{
		fac = fac * i;
		i++;
	}

	return (fac);
}
