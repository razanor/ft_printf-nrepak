/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrepak <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 19:04:54 by nrepak            #+#    #+#             */
/*   Updated: 2018/01/16 19:05:41 by nrepak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int a;

	a = ft_printf("@moulitest: %.d %.0d\n", 0, 3);
	printf("%d\n", a);
	a = printf("@moulitest: %.d %.0d\n", 0, 3);
	printf("%d\n", a);

	// wchar_t *c = L"Привет мир/Hello World";
	// setlocale(LC_ALL, "");
	return (0);
}