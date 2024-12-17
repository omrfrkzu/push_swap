/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:16:46 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/17 20:16:47 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a)
{
    if (a->top > 0)
    {
        int temp = a->data[a->top];
        a->data[a->top] = a->data[a->top - 1];
        a->data[a->top - 1] = temp;
    }
}

void pb(t_stack *a, t_stack *b)
{
    if (a->top >= 0)
    {
        push(b, pop(a));
    }
}

void pa(t_stack *a, t_stack *b)
{
    if (b->top >= 0)
    {
        push(a, pop(b));
    }
}
