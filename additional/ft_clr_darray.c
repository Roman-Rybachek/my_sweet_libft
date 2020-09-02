/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clr_darray.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 19:42:22 by jeldora           #+#    #+#             */
/*   Updated: 2020/08/31 17:55:14 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_clr_darray(char **array)
{
	int counter;

	counter = 0;
	while (*array)
	{
		free(*array);
		array++;
		counter++;
	}
	array -= counter;
	free(array);
}
