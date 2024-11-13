/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebroudic <ebroudic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:05:24 by ebroudic          #+#    #+#             */
/*   Updated: 2024/10/21 10:54:03 by ebroudic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dsa;

	dsa = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dsa == NULL)
		return (NULL);
	ft_strcpy(dsa, (char *)s1);
	ft_strcpy(dsa + ft_strlen(s1), (char *)s2);
	return (dsa);
}
/*int main()
{
	printf("%s\n",ft_strjoin("hello"," world"));
	return (0);
}*/