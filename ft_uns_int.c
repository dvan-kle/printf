/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_uns_int.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/26 16:20:34 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/11/04 19:20:32 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_len(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_uitoa(unsigned int n)
{
	char				*ptr;
	unsigned int		len;

	len = ft_len(n);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (n == 0)
		ptr[0] = '0';
	else
	{
		while (n != 0)
		{
			ptr[len] = (n % 10) + '0';
			n = n / 10;
			len--;
		}
	}
	return (ptr);
}

int	ft_uns_int(int nb)
{
	char	*ptr;
	int		i;

	ptr = ft_uitoa(nb);
	if (!ptr)
		return (0);
	i = ft_putstr(ptr);
	free(ptr);
	return (i);
}
