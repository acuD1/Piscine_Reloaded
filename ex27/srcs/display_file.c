/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsciand <arsciand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 18:53:28 by arsciand          #+#    #+#             */
/*   Updated: 2018/11/05 18:59:53 by arsciand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

size_t	ft_strlen(char const *s)
{
	return (*s ? ft_strlen(++s) + 1 : 0);
}

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}

void	clear_buff(char *buff, size_t buff_size)
{
	size_t i;

	i = 0;
	while (i < buff_size)
		buff[i++] = '\0';
}

void	do_read(char *av)
{
	int		fd;
	char	buff[BUFF_SIZE];

	fd = open(av, O_RDONLY);
	clear_buff(buff, BUFF_SIZE);
	if (fd == -1)
		return;
	while (read(fd, buff, BUFF_SIZE - 1))
	{
		ft_putstr(buff);
		clear_buff(buff, BUFF_SIZE);
	}
	close(fd);
}

int		main(int ac, char **av)
{
	if (ac < 2)
		ft_putstr("File name missing.\n");
	else if (ac < 2)
		ft_putstr("Too many arguments.\n");
	else
		do_read(av[1]);
	return (0);
}
