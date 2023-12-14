/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:21:46 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/14 10:45:53 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_splits(char const *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s == c)
			count++;
		s++;
	}
	return (count);
}

int ft_sub_len(char const *s, char c)
{
	
}
char	**ft_split(char const *s, char c)
{
	char	**sub_s;
	sub_s = (char **)malloc(ft_count_splits(s, c) + 1);
}

int main(int argc, char const *argv[])
{
	ft_split("hola mundo que tal", ' ');
	return 0;
}
