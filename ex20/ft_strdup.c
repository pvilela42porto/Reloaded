/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 19:22:42 by pvilela           #+#    #+#             */
/*   Updated: 2026/10/30 14:04:26 by pvilela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	if ((str = (char *)malloc(sizeof(*str) * size)) == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
