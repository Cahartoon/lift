/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:53:54 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/12 00:24:19 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;

	if (!(dup = ft_strnew(ft_strlen(s))))
		return (NULL);
	dup = ft_strcpy(dup, s);
	return (dup);
}
