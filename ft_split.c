/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:21:46 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/14 18:30:50 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_splits(char const *s, char c)
{
	int	count;
	int	bool_in_word;

	count = 0;
	bool_in_word = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (bool_in_word == 0)
			{
				count++;
				bool_in_word = 1;
			}
		}
		else
			bool_in_word = 0;
		s++;
	}
	return (count);
}

int	ft_sub_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		splits;
	int		i;
	int		len;
	char	**result;

	splits = ft_count_splits(s, c);
	result = (char **)malloc((splits + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < splits)
	{
		while (*s == c)
			s++;
		len = ft_sub_len(s, c);
		result[i] = (char *)malloc((len + 1) * sizeof(char));
		if (!result[i])
			free(result[i]);
		ft_strlcpy(result[i], s, len + 1);
		s += len;
		i++;
	}
	result[splits] = NULL;
	return (result);
}
