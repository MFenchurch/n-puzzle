/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 10:32:11 by tfleming          #+#    #+#             */
/*   Updated: 2015/03/23 11:08:16 by tfleming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "n_puzzle.h"

/*
** algorithm from wikipedia:
** http://en.wikipedia.org/wiki/A*_search_algorithm
*/

/*
** will make use of rb-trees:
** http://web.mit.edu/~emin/www.old/source_code/red_black_tree/index.html
** note about sort function: what if there is a collision regarding
** the scores? Do we have to search both sides of the tree? Ugh.
*/

/*
** is_empty: true if t_rb_tree is empty
** remove_lowest_fscore: removes the lowest fscore in the t_rb_tree
** reconstruct_path: returns the solution
** rb_tree_add: adds a new pointer to the t_rb_tree specified
** solution: memory we want to get to with input_data
*/

/*
** solve needs to be a wrapper function to place the data into a
** t_node... what does it return?
*/

/*
** t_rb_tree different from t_rb_node
*/

static void			generate_neighbors(int *number_of_neighbors
										, t_node *neighbors)
{
	// stuff
}

static void			inside_bit()
{
	t_node			neighbors[4];
	int				number_of_neighbors;
	int				i;

	number_of_neighbors = 0;
	generate_neighbors(&number_of_neighbors, neighbors);
	i = 0;
	while (i < number_of_neighbors)
	{
		
	}
}

void				solve(int size, t_ushort *input_data, t_heuristic heuristic)
{
	t_rb_tree		*already_evaluated;
	t_rb_tree		*to_be_evaluatd;
	t_rb_tree		*came_from;
	t_node			*current;
	t_ushort		*solution;

	while (!is_empty(to_be_evaluated))
	{
		current = remove_lowest_fscore(to_be_evaluated);
		if (ft_memcmp(current->data, solution, size * size * sizeof(t_ushort)))
			return reconstruct_path(current);
		rb_tree_add(already_evaluated, current);
		inside_bit();
	}
}
