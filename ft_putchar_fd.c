/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:42:56 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:24 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
#include <fcntl.h>

int main() {
     
    int file_descriptor = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (file_descriptor == -1) {
        
        return 1;
    }

    ft_putchar_fd('S', file_descriptor);

     
    close(file_descriptor);

    return 0;
}
*/
