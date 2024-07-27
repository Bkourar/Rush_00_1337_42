/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessalma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:38:51 by oessalma          #+#    #+#             */
/*   Updated: 2023/09/17 19:38:56 by oessalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush_chek(int j, int i, int y, int x)
{
	if (i == 1 || i == x || j == 1 || j == y)
	{
		if ((i == 1 && j == 1) || (i == 1 && j == y))
		{
			ft_putchar('o');
		}
		else if ((i == x && j == 1) || (j == y && i == x))
		{
			ft_putchar('o');
		}
		else if ((i == 1 || i == x) && (j >= 2 && j <= y - 1))
		{
			ft_putchar('-');
		}
		else if ((j == 1 || j == y) && (i >= 2 && i <= x - 1))
		{
			ft_putchar('|');
		}
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush_loop(int j, int i, int y, int x)
{
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			rush_chek(j, i, y, x);
			j++;
		}
		i++;
		if (i <= x)
		{
			ft_putchar('\n');
		}
	}
}

void	rush00(int y, int x)
{
	rush_loop(1, 1, y, x);
}
