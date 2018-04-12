/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespace.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshah <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 22:14:56 by dshah             #+#    #+#             */
/*   Updated: 2018/03/22 23:35:27 by dshah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_word(char c, char cbefore)
{
	return (((c >= '0' && c <= '9') ||
				(c >= 'A' && c <= 'Z') ||
				(c >= 'a' && c <= 'z'))
			&& (cbefore == ' ' || cbefore == '\n' || cbefore == '\t'));
}

int		get_words_count(char *str)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0')
	{
		if (is_word(str[i], str[i - 1]) || (str[i] != ' ' && str[i] != '\n' &&
					str[i] != '\t' && i == 0))
			words_count++;
		i++;
	}
	return (words_count);
}

int		if_new_string(int i, char *str)
{
	return (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' &&
			str[i - 1] != '\t');
}

int		*get_size(char *str)
{
	int	i;
	int index;
	int	words_count;
	int	*words_size;

	i = 0;
	index = 0;
	words_count = get_words_count(str);
	words_size = malloc(words_count * sizeof(int));
	while (i <= words_count)
	{
		words_size[i] = 0;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			words_size[index]++;
		else if (if_new_string(i, str))
			index++;
		i++;
	}
	return (words_size);
}

char	**ft_split_whitespaces(char *str)
{
	char	**words;
	int		i;
	int		j;
	int		index;
	int		*words_size;

	index = 0;
	j = 0;
	words = malloc((get_words_count(str) + 1) * sizeof(char*));
	words_size = get_size(str);
	i = -1;
	while (str[++i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		{
			if (i == 0 || is_word(str[i], str[i - 1]))
				words[index] = malloc(words_size[index] * sizeof(char));
			words[index][j] = str[i];
			words[index][++j] = '\0';
		}
		else if (if_new_string(i, str) && ++index)
			j = 0;
	}
	words[get_words_count(str)] = 0;
	return (words);
}
