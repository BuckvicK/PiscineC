/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krakharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 20:47:23 by krakharo          #+#    #+#             */
/*   Updated: 2018/11/02 20:47:25 by krakharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void*))
{
	if (root != NULL)
	{
		btree_apply_prefix(root->left, applyf);
		(*applyf)(root->item);
		btree_apply_prefix(root->right, applyf);
	}
}
