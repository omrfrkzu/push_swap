/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:16:43 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/17 20:16:44 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int *data;
    int top;
    int size;
} t_stack;

t_stack *init_stack(int size);
void push(t_stack *stack, int value);
int pop(t_stack *stack);
void print_stack(t_stack *stack, char *name);

void sa(t_stack *a);
void pb(t_stack *a, t_stack *b);
void pa(t_stack *a, t_stack *b);

#endif
