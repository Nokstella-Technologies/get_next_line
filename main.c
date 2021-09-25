/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prafael- <prafael-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:23:29 by prafael-          #+#    #+#             */
/*   Updated: 2021/09/25 15:23:30 by prafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int    main(void)
{
    int     fpointer;
    char    *singleLine = malloc(1 * sizeof(char));

    fpointer = open("teste", 256);
    while(singleLine != NULL)
    {
        free(singleLine);
        singleLine = get_next_line(fpointer);
        printf("%s", singleLine);
    }
    return (0);
}
