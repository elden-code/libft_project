/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:09:19 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/05 00:10:33 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stddef.h>

char* ft_strncpy(char* dest, const char* src, size_t n) {
    char* original_dest = dest;

    while (n > 0 && (*dest++ = *src++) != '\0') {
        n--;
    }

    while (n > 0) {
        *dest++ = '\0';
        n--;
    }

    return original_dest;
}

char *ft_substr(char const *s, unsigned int start, size_t len) {
    size_t str_len = 0;
    while (s[str_len]) {
        str_len++;
    }

    if (start >= str_len || len == 0) {
        return NULL;
    }

    if (start + len > str_len) {
        len = str_len - start;
    }

    char* result = (char*)malloc(len + 1);
    if (result == NULL) {
        return NULL;
    }

    ft_strncpy(result, s + start, len);
    result[len] = '\0';

    return result;
}

