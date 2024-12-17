/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:07:19 by ajosse            #+#    #+#             */
/*   Updated: 2024/12/07 03:04:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <fcntl.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 30
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

// PRINTF
int			ft_printf(const char *format, ...);
int			ft_putnbr_base(unsigned long long n, const char *base);
int			manage_c(char c);
int			manage_s(const char *str);
int			manage_p(void *ptr);
int			manage_d(int n);
int			manage_i(int n);
int			manage_u(unsigned int n);
int			manage_x(unsigned int n);
int			manage_upperx(unsigned int n);
int			ft_num_len(int n);

// GNL
char		*get_next_line(int fd);
int			rank_in(const char *str, char c);
size_t		ft_strlen(const char *str);
char		*ft_strdup(const char *src);
void		*ft_memcpy(void *destination, const void *source, size_t n);
char		*ft_allocplus(char *buffer, size_t size);
char		*get_first_line(char	*buffer);
char		*cut_first_line(char	*buffer);
char		*get_next_line(int fd);
char		*read_and_stock(int fd, char *stock);
char		*initialize_and_validate(int fd, char *stock);

// BASE LIBFT
int			ft_atoi(const char *str);
void		ft_bzero(void *ptr, size_t len);
void		*ft_calloc(size_t nitems, size_t size);
int			is_in(const char *str, char c);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void*));
void		ft_lstdelone(t_list *lst, void (*del)(void*));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);
void		*ft_memchr(const void *ptr, int value, size_t num);
int			ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
void		*ft_memcpy(void *destination, const void *source, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t n);
void		*ft_memset(void *ptr, int value, size_t num);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *str, int fd);
void		ft_putnbr_fd(int nb, int fd);
void		ft_putstr_fd(char *str, int fd);
char		**ft_split(char const *str, char c);
char		*ft_strcat(char *dest, char *src);
char		*ft_strchr(const char *str, int c);
char		*ft_strcpy(char *dest, char *src);
char		*ft_strdup(const char *src);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dest, const char *src, size_t size);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlen(const char *str);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		ft_strncpy(char *dest, const char *src, size_t size);
char		*ft_strnstr(const char *str, const char *to_find, size_t len);
char		*ft_strrchr(const char *str, int c);
void		ft_strrev(char *str);
char		*ft_strstr(char *str, char *to_find);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_tolower(int c);
int			ft_toupper(int c);

#endif
