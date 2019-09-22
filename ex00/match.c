/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   match.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/09/22 10:18:08 by averheij       #+#    #+#                */
/*   Updated: 2019/09/22 11:03:18 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_wildcard(char *s1, char *s2, int pos1, int pos2)
{
	while (s2[pos2] == '*' && s1[pos1])
	{
		if (!s2[pos2 + 1])
		{
			while (s1[pos1])
				pos1++;
			pos2++;
			break ;
		}
		if (s1[pos1] == s2[pos2 + 1])
			pos2++;
		else
			pos1++;
	}
	return (pos1);
}

int		match(char *s1, char *s2)
{
	int		pos1;
	int		pos2;

	pos1 = 0;
	pos2 = 0;
	while (s1[pos1] || s2[pos2])
	{
		if (s2[pos2] == '*')
		{
			while (s2[pos2 + 1] == '*')
				pos2++;
			pos1 = ft_wildcard(s1, s2, pos1, pos2);
			pos2++;
		}
		if (s1[pos1] != s2[pos2])
			return (0);
		if (s1[pos1] && s2[pos2])
		{
			pos1++;
			pos2++;
		}
	}
	return (1);
}
