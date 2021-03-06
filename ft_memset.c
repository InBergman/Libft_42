/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberedda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:17:45 by mberedda          #+#    #+#             */
/*   Updated: 2015/12/08 13:22:18 by mberedda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memset(void *b, int c, size_t len)
{
	unsigned char		*p;

	p = b;
	while (len--)
	{
		*p++ = c;
	}
	return (b);
}
