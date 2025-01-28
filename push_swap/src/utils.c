/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:36:38 by omkuzu            #+#    #+#             */
/*   Updated: 2025/01/25 17:36:39 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

// Dizideki eleman sayısını hesapladık
int	stack_len(t_data *data, char label)
{
	int	i;

	i = 0;
	if (label == 'a')
		i = data->size - data->down;
	else
		i = data->up + 1;
	return (i);
}

// Verilen dizenin sıralı olup olmadığını kontrol ettik
int	is_sorted(t_data *data, char label)
{
	int	i;

	i = 0;
	if (label == 'a' && stack_len(data, 'a') > 1)
	{
		while (i < data->size - data->down - 1)
		{
			if (data->arr[data->down + i] > data->arr[data->down + i + 1])
				return (0);
			i++;
		}
	}
	else if (label == 'b' && stack_len(data, 'b') > 1)
	{
		while (i < data->up)
		{
			if (data->arr[data->up - i] < data->arr[data->up - i - 1])
				return (0);
			i++;
		}
	}
	return (1);
}

// Verilen dizenin sıralı olup olmadığını kontrol ettik
int	is_full_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->size - 1)
	{
		if (data->arr[i] > data->arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	free_str_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}

void	exit_err(t_data *data, char **str_arr, int flag)
{
	if (flag == 1)
		free_str_arr(str_arr);
	if (data && data->arr)
		free(data->arr);
	if (data)
		free(data);
	write(2, "Error\n", 6);
	exit(1);
}
