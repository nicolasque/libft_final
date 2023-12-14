/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 18:33:49 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/14 19:03:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_digits(int n)
{
	int count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	digit_count;
	digit_count = ft_count_digits(n);
	return (0);

}

int main(int argc, char const *argv[])
{
	printf("Cndtidad de digitos: %i" ,ft_count_digits(-12345678));
	return 0;
}
