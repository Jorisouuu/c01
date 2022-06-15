/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jporet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:59:23 by jporet            #+#    #+#             */
/*   Updated: 2022/06/14 12:03:18 by jporet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "dowqhqfojqbfffqdsadsafd2w";
	printf("%d", ft_strlen(str));
	return (0);
}
