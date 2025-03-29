/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marlee <marlee@student.42student.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 12:40:15 by marlee            #+#    #+#             */
/*   Updated: 2025/03/29 18:36:30 by marlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isspace(int character)
{
	if (character == ' ' || character == '\t' || character == '\n'
		|| character == '\v' || character == '\f' || character == '\r')
		return (1);
	else
		return (0);
}

int	ft_changesign(int character)
{
	if (character == '-')
		return (-1);
	else if (character == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	printf ("%s\n", str);
	while (ft_isspace(str[i]) == 1)
		i++;
	while (str[i] == '-')
		{
			if (str[i] == '-')
			sign = sign * ft_changesign(str[i]);
			i++;
		}
	while (str[i] >= '1' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}

	return (result * sign);
}

// int main(int argc, char *argv[])
int main()
{
	int printout;

	char test_string[] = "\t-5678";
	printf ("%c", test_string[1]);
	// if (argc != 2)
	// {
	// 	printf ("Try again.");
	// 	return (0);
	// }
	printout = ft_atoi(test_string);
	// printf ("%s\n", argv[1]);
	printf ("%d\n", printout);
	return (0);
}
