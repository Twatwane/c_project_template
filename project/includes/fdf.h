/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 00:22:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/05 00:22:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

typedef struct s_point
{
	int x;
	int y;
	int z;
}t_point;

typedef struct s_row
{
	t_point	*point;
	struct s_row	*next;
}t_row;

typedef struct s_array
{
	t_row	*row;
	struct s_array	*next;
}t_array;


// point
t_point		*create_point(int x, int y, int z);

// row
t_row		*create_row(char *str, int row_number);
t_row		*row_last(t_row *row);
void		row_append(t_row **row, t_point *point);
int			row_len(t_row *row);

// array
void		print_array(t_array *array, int coord);
t_array		*create_array(char *map);
t_array		*array_last(t_array *array);
void		array_append(t_array **array, t_row *row);
int			array_len(t_array *array);



#endif