/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arkhemat <arkhemat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:26:32 by arkhemat          #+#    #+#             */
/*   Updated: 2023/08/14 17:32:43 by arkhemat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{

	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb <= 1)
		return (1);

	return (nb * ft_recursive_factorial(nb - 1));
}
