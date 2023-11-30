/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:09:37 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:38 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
}
/*
#include <fcntl.h>

int main() {

	char s[] = "solayman";

    int file_descriptor = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (file_descriptor == -1) {

        return 1;
    }

    ft_putstr_fd(s, file_descriptor);


    close(file_descriptor);

    return 0;
}
*/
