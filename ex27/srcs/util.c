/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 15:21:36 by pvilela           #+#    #+#             */
/*   Updated: 2026/10/30 15:31:34 by pvilela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_file(int fd)
{
	size_t	read_bytes;
	char	buffer[1025];

	read_bytes = read(fd, buffer, 1024);
	while (read_bytes > 0)
	{
		write(1, buffer, read_bytes);
		read_bytes = read(fd, buffer, 1024);
	}
}
