/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/22 10:17:58 by averheij       #+#    #+#                */
/*   Updated: 2019/09/22 10:19:28 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		match(char *s1, char *s2);

int		main(int argc, char **argv)
{
	if (argc == 3)
		return (match(argv[1], argv[2]));
	else
		return (-1);
}
