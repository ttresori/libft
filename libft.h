/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 23:24:07 by ttresori          #+#    #+#             */
/*   Updated: 2019/01/24 01:30:19 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdbool.h>
# include <stdlib.h>

# define IS_SPACE(x) (x == ' ' || x == '\t' || x == '\r' || x  == '\f')
# define BLACK	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define BLUE	"\033[1;34m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define GREY	"\033[1;37m"
# define NORMAL	"\033[0m"

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memmove(void *dest, void const *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memcpy(void *dest, void const *src, size_t n);
void				*ft_memccpy(void *dest, void const *src, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				*ft_memalloc(size_t size);
void				ft_strdel(char **as);
size_t				ft_strlcat(char *dest, char const *src, size_t size);
char				*ft_strnew(size_t size);
void				ft_memdel(void **ap);
int					ft_atoi(char const *str);
char				*ft_strstr(char const *str, char const *to_find);
int					ft_memcmp(void const *s1, void const *s2, size_t n);
char				*ft_itoa(int n);
char				**ft_strsplit(char const *s, char c);
void				*ft_memchr(void const *s, int c, size_t n);
char				*ft_strrchr(char const *s, int c);
char				*ft_strchr(char const *s, int c);
size_t				ft_strlen(char const *str);
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strncpy(char *dest, char const *src, size_t n);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
char				*ft_strnstr(char const *str, char const *to_find, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strncat(char *dest, char const *src, size_t n);
char				*ft_strdup(char const *src);
void				ft_strclr(char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
char				**ft_free_split(char **split);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);
void				ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
char				**ft_strsplitset(char const *s, char const *delims);
void				ft_putendl_b(const char *s);
int					ft_print_tab(char **tab);
void				print_space(int i);
char				**add_in_tab(char **tab, int size, char *element);
char				*ft_strsdup(const char *src, int start, int stop);
void				*ft_realloc(void *ptr, size_t prev_size, size_t new_size);
int					ft_isblanks(int c);
char				**remove_in_tab(char **tab, int size, int pos);
int					search_env(char **env, int size, char *element);

#endif
