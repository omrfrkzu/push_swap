/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 20:16:48 by omkuzu            #+#    #+#             */
/*   Updated: 2024/12/17 20:16:49 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main()
{
    int initial_data[] = {2, 1, 3, 6, 5, 8};
    int size = sizeof(initial_data) / sizeof(initial_data[0]);

    t_stack *a = init_stack(size);
    t_stack *b = init_stack(size);

    for (int i = size - 1; i >= 0; i--)
        push(a, initial_data[i]);

    printf("Başlangıç Durumu:\n");
    print_stack(a, "A");
    print_stack(b, "B");

    printf("\nAksiyon: sa (swap A)\n");
    sa(a);
    print_stack(a, "A");

    printf("\nAksiyon: pb pb pb (push to B)\n");
    pb(a, b);
    pb(a, b);
    pb(a, b);
    print_stack(a, "A");
    print_stack(b, "B");

    printf("\nAksiyon: pa pa (push to A)\n");
    pa(a, b);
    pa(a, b);
    print_stack(a, "A");
    print_stack(b, "B");
    
    free(a->data);
    free(a);
    free(b->data);
    free(b);

    return 0;
}
