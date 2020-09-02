/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeldora <jeldora@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/25 19:27:24 by jeldora           #+#    #+#             */
/*   Updated: 2020/08/31 17:54:47 by jeldora          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_addchars(char *line, char c, int count)
{
	char	*tmp;
	int		len;

	while (count--)
	{
		len = ft_strlen(line);
		tmp = line;
		line = (char*)malloc(len + 2);
		ft_memcpy(line, tmp, len);
		line[len] = c;
		line[len + 1] = '\0';
		free(tmp);
	}
	return (line);
}
