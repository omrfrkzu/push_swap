/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:16:41 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/17 20:16:42 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(int size)
{
    t_stack *stack = malloc(sizeof(t_stack));
    stack->data = malloc(sizeof(int) * size);
    stack->top = -1; 
    stack->size = size;
    return stack;
}

void push(t_stack *stack, int value)
{
    if (stack->top < stack->size - 1)
        stack->data[++stack->top] = value;
}

int pop(t_stack *stack)
{
    if (stack->top >= 0)
        return stack->data[stack->top--];
    return -1; 
}

void print_stack(t_stack *stack, char *name)
{
    printf("Stack %s: ", name);
    for (int i = 0; i <= stack->top; i++)
        printf("%d ", stack->data[i]);
    printf("\n");
}
