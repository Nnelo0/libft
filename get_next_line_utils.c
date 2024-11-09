/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:34:12 by ebroudic          #+#    #+#             */
/*   Updated: 2024/11/09 12:58:31 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (!src || !dest)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*dsa;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	dsa = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (dsa == NULL)
		return (NULL);
	ft_strcpy(dsa, s1);
	ft_strcpy(dsa + ft_strlen(s1), s2);
	return (dsa);
}
