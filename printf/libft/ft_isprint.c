/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadeh <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:32:08 by asaadeh           #+#    #+#             */
/*   Updated: 2024/08/26 15:36:24 by asaadeh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int p)
{
	if (p >= 32 && p <= 126)
		return (1);
	return (0);
}
