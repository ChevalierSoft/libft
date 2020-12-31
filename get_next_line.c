/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 02:01:48 by dait-atm          #+#    #+#             */
/*   Updated: 2020/12/31 18:48:28 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "limits.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 64
#endif

#ifdef __unix__
# define FD_MAX FOPEN_MAX
#endif

#ifdef OS_Windows
# define FD_MAX FOPEN_MAX
#endif

#ifndef FD_MAX
# define FD_MAX 20
#endif

#define ALERTE -1
#define RAS 619

static inline
int	ret_a_plus(int *pt, int r)
{
	(*pt)++;
	return (r);
}

static inline
int	ret_a_zero(int *pt, int r)
{
	(*pt) = 0;
	return (r);
}

static
int	bosg(int *pt, char *buff, char **line, int res)
{
	char	mas[2];
	char	*tmp;

	mas[1] = '\0';
	while (*pt < res)
	{
		if (buff[*pt] == '\n')
			return (ret_a_plus(pt, 1));
		else
		{
			tmp = (*line);
			mas[0] = buff[(*pt)++];
			if (!((*line) = ft_strjoin(tmp, mas)))
			{
				free(tmp);
				return (ALERTE);
			}
			free(tmp);
		}
	}
	if (res != BUFFER_SIZE)
		return (ret_a_zero(pt, 0));
	return (RAS);
}

int	get_next_line(int fd, char **line)
{
	static long	res[FD_MAX];
	static char	buff[FD_MAX][BUFFER_SIZE];
	static int	a[FD_MAX];
	int			is_ok;

	if (fd < 0 || line == NULL || BUFFER_SIZE < 1 || read(fd, buff[fd], 0) < 0)
		return (-1);
	(*line) = ft_strdup("");
	if (a[fd] > 0 && a[fd] < BUFFER_SIZE && buff[fd][a[fd]])
	{
		if (res[fd] < BUFFER_SIZE)
			return (bosg(&(a[fd]), buff[fd], line, res[fd]));
		is_ok = bosg(&(a[fd]), buff[fd], line, res[fd]);
		if (is_ok != RAS)
			return (is_ok);
	}
	while ((res[fd] = read(fd, buff[fd], BUFFER_SIZE)))
	{
		a[fd] = 0;
		if (res[fd] < BUFFER_SIZE)
			return (bosg(&(a[fd]), buff[fd], (line), res[fd]));
		is_ok = bosg(&(a[fd]), buff[fd], line, BUFFER_SIZE);
		else if (is_ok != RAS)
			return (is_ok);
		ft_memset(buff, 0, BUFFER_SIZE);
	}
	return (0);
}
