/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfiora-d <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:57:06 by nfiora-d          #+#    #+#             */
/*   Updated: 2025/10/03 12:43:43 by nfiora-d         ###   ####lausanne.ch   */
/*                                                                            */
/* ************************************************************************** */
// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t nmemb, size_t size);

int ft_count_words(const char *s, char c)
{
    size_t i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if(s[i] == c)
        count++;
        i++;
    }
    if (s[i -1] != c)
        count++;
    return (count);
}
int count_letter(char const *str, char c)
{
    size_t i;
    size_t letter;

    i = 0;
    while (str[i] != c && str[i])
    {
        letter++;
        i++;
    }
    printf("%ld", i);
    return (letter);
}
char **ft_split(char const *s, char c)
{
    size_t x;
    void *tab;
    char const *str;

    str = s;
    tab = malloc(sizeof(char *) * (ft_count_words(str, c) + 1)); // cast en char (retour calloc void*)?
    if (tab == NULL)
	{
		return (NULL);
	}
	(char *)tab[x] = (void *)malloc(sizeof(char) * count_letter(str, c));
    (unsigned char *)tab[x] = ft_memcpy(tab[x], s[0], count_letter(str, c));
    return (tab);
}

int main (void)
{
    char tab[100] = "lol lul lal";
    char **swo;
    swo = ft_split(tab, ' ');
    printf("%s", swo[0]);
    printf("%s", swo[1]);
    printf("%s", swo[2]);
    printf("%s", swo[3]);

}