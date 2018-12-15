/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 23:46:09 by krakharo          #+#    #+#             */
/*   Updated: 2018/10/24 23:46:11 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_check_sep(char c, char *sep);
int		ft_count_word(char *str, char *sep);
char	**ft_split_whitespaces(char *str);
char	*ft_strdup(char *str);
int	*ft_range(int min, int max);
int		ft_wordlen(char *str/*, int n*/);
int	ft_ultimate_range(int **range, int min, int max);
char	*ft_concat_params(int argc, char **argv);

int		main(void)
{
	int		i;
	int k = 0;
	int *rang;
	// char	*sepr;
	// char	*str1;
	// char	*str2;
	// char	*str3;


	// char *res = ft_concat_params(argc, argv);
	// printf("%s", res);
	// str1 = "12 321 42";
	// // str2 = ft_strdup(str1);]
	i = ft_ultimate_range(&rang, 0, 8);
	k = -5;
	while(k < 11){
		printf("%d\n", *(rang+k));
		k++;
	}
	// printf("%d\n", i);
	//printf("%s\n", str2);
	// sepr = " \t\n";
	// str1 = "   1233 asd asdfdf we   ";
	// str2 = "123asdsa asd3 5 asdfdf we   ";
	// str3 = "   123 asdasd a\tsdfdf we";

	// i = ft_count_word(str1, sepr);
	// printf("Count word: %d\n", i);

	// i = ft_count_word(str2, sepr);
	// printf("Count word: %d\n", i);

	// i = ft_count_word(str3, sepr);
	// printf("Count word: %d\n", i);


	// ft_split_whitespaces(str1);
	// printf("MAIN: %s\n", str1);
	// int start1 = ft_wordlen((str1), 0);
	// int start2 = ft_wordlen((str2), 0);
	// int start3 = ft_wordlen((str3), 0);
	// int end1 = ft_wordlen((str1), start1 + 1);
	// int end2 = ft_wordlen((str2), start2 + 1);
	// int end3 = ft_wordlen((str3), start3 + 1);
	// printf("Start STR1: %d\nEnd STR1: %d\nLen STR1: %d\n", start1, end1, end1 - start1);
	// printf("Start STR2: %d\nEnd STR2: %d\nLen STR2: %d\n", start2, end2, end2 - start2);
	// printf("Start STR3: %d\nEnd STR3: %d\nLen STR3: %d\n", start3, end3, end3 - start3);
	
	// printf("STR1 LEN 2 WORD:\n");
	// ft_split_whitespaces(str1);
	// printf("STR2 LEN 2 WORD:\n");
	// ft_split_whitespaces(str2);
	// printf("STR3 LEN 2 WORD:\n");
	// ft_split_whitespaces(str3);
	// ft_split_whitespaces(str1);
	// printf("STR1: DONE\n");

	// ft_split_whitespaces(str2);
	// printf("STR2: DONE\n");

	// ft_split_whitespaces(str3);
	// printf("STR3: DONE\n");
	// char **test;


	// test = ft_split_whitespaces(str3);
	// while (*(*(test) + i) != '\0')
	// {
	// 	printf("|%s|\n", (*(test) + i));
	// 	i++;
	// }
	// printf("END|%s|\n", *(test));
	return (0);
}
