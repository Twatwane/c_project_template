/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:14:00 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:07:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	manage_percent(void)
{
	ft_putstr_fd("%", 1);
	return (1);
}

static int	process(const char key, va_list args)
{
	int		result;

	result = 0;
	if (key == 'c')
		result = manage_c(va_arg(args, int));
	if (key == 's')
		result = manage_s(va_arg(args, const char *));
	if (key == 'p')
		result = manage_p(va_arg(args, void *));
	if (key == 'd')
		result = manage_d(va_arg(args, int));
	if (key == 'i')
		result = manage_i(va_arg(args, int));
	if (key == 'u')
		result = manage_u(va_arg(args, unsigned int));
	if (key == 'x')
		result = manage_x(va_arg(args, unsigned int));
	if (key == 'X')
		result = manage_upperx(va_arg(args, unsigned int));
	if (key == '%')
		result = manage_percent();
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;
	char	c;

	va_start(args, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += process(*(format), args);
		}
		else
		{
			c = (unsigned char) *format;
			write(1, &c, 1);
			counter++;
		}
		format++;
	}
	va_end(args);
	return (counter);
}
