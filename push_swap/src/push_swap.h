/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:36:24 by omkuzu            #+#    #+#             */
/*   Updated: 2025/01/25 17:36:25 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_data
{
	int	*arr;
	int	size;
	int	up;
	int	down;
}		t_data;

void	push(t_data *data, char label);
void	swap(t_data *data, char label);
void	rotate(t_data *data, char label);
void	reverse_rotate(t_data *data, char label);

void	check_args(int ac, char **av);

void	sort_three(t_data *data);
void	sort_four_and_five(t_data *data, int size);

int		*replace(t_data *data, int *arr_sorted, int size);
int		*bubble_sort(t_data *data, int size);
void	radix_sort(t_data *data);

int		stack_len(t_data *data, char label);
int		is_sorted(t_data *data, char label);
int		is_full_sorted(t_data *data);
void	free_str_arr(char **str);
void	exit_err(t_data *data, char **str_arr, int flag);

#endif