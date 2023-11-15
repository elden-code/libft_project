/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:30:44 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/08 01:02:28 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **ft_split(char const *s, char c) {
    size_t word_count = 0;
    const char *start = s;
    char **result = NULL;

    // Pass 1: Count the words
    while (*s) {
        if (*s == c) {
            if (s != start) {
                word_count++;
            }
            start = s + 1;
        }
        s++;
    }

    if (s != start) {
        word_count++;
    }

    // Allocate memory for the array of pointers
    result = (char **)malloc((word_count + 1) * sizeof(char *));

    if (result == NULL) {
        return NULL; // Memory allocation failed
    }

    // Pass 2: Populate the allocated memory
    word_count = 0;
    start = s = s - 1; // Reset start to the end of the string

    while (s >= start) {
        if (*s == c || s == start - 1) {
            size_t word_len = start - s;
            if (word_len > 0) {
                // Found a word
                result[word_count] = (char *)malloc(word_len + 1);
                strncpy(result[word_count], s + 1, word_len);
                result[word_count][word_len] = '\0';
                word_count++;
            }
            start = s;
        }
        s--;
    }

    // Add a NULL pointer to indicate the end of the array
    result[word_count] = NULL;

    return result;
}

int main() {
    printf("Hello world!\n");
    char c = ' ';
    char s[] = "sola elden is an GM";
    char **str = ft_split(s, c);

    for (int i = 0; str[i] != NULL; i++) {
        printf("%s\n", str[i]);
        free(str[i]); // Free each word
    }
    free(str); // Free the array of pointers

    return 0;
}

