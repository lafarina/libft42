/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:37:02 by laufarin          #+#    #+#             */
/*   Updated: 2023/09/20 17:20:01 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char *ptr;
	char *cp_s;

	i = 0;
	j = 0;
	cp_s = (char *) s;
	if (start > ft_strlen(s))
		len = 0;
	if(ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	ptr = malloc(sizeof(char) *  len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (cp_s[i])
	{
		if (start == i)
		{
			while(j < len)
			{
				ptr[j] = cp_s[i + j];
				j++;
			}
		}
		i++;
	}

/*	while(i + start < ft_strlen(s) && i < len)
	{	
		ptr[i] = cp_s[start + i];
		i++;
	}
	ptr[i] = '\0';*/
	ptr[j] = '\0';
	return (ptr);
}
