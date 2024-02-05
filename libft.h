/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:19:00 by nquecedo          #+#    #+#             */
/*   Updated: 2024/01/16 19:32:54 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	*ft_memset(void *str, int c, size_t n); //Esta función llena los primeros n bytes del área de memoria apuntada por str con el valor constante c. Devuelve un puntero a la zona de memoria str.
void	ft_bzero(void *s, size_t n); //Esta función pone a cero (bytes que contienen '\0') los primeros n bytes del área de memoria apuntada por s.
void	*ft_memcpy(void *dest, const void *src, size_t n); //Esta función copia n bytes del área de memoria apuntada por src a la zona de memoria apuntada por dest. Devuelve un puntero a dest.
void	*ft_memmove(void *dest, const void *src, size_t count); //Esta función copia count bytes del área de memoria apuntada por src a la zona de memoria apuntada por dest. Devuelve un puntero a dest.
void	*ft_memchr(const void *str, int c, size_t n); //Esta función escanea los primeros n bytes del área de memoria apuntada por str en busca del carácter c. Devuelve un puntero a la primera ocurrencia de c o NULL si no se encuentra.
int		ft_memcmp(const void *str1, const void *str2, size_t n); //Esta función compara los primeros n bytes del área de memoria apuntada por str1 con los primeros n bytes del área de memoria apuntada por str2. Devuelve un entero menor, igual o mayor que cero si str1 es, respectivamente, menor, igual o mayor que str2.
size_t	ft_strlen(const char *str); //Esta función calcula la longitud de la cadena de caracteres str, sin contar el carácter nulo final '\0'. Devuelve el número de caracteres en la cadena de caracteres apuntada por str.
int		ft_isalpha(int c); //Esta función verifica si el carácter c es alfabético. Devuelve 1 si c es alfabético, 0 en caso contrario.
int		ft_isdigit(int c); //Esta función verifica si el carácter c es un dígito decimal. Devuelve 1 si c es un dígito decimal, 0 en caso contrario.
int		ft_isalnum(int c); //Esta función verifica si el carácter c es alfanumérico. Devuelve 1 si c es alfanumérico, 0 en caso contrario.
int		ft_isascii(int c); //Esta función verifica si el carácter c es un carácter ASCII. Devuelve 1 si c es un carácter ASCII, 0 en caso contrario.
int		ft_isprint(int c); //Esta función verifica si el carácter c es imprimible. Devuelve 1 si c es imprimible, 0 en caso contrario.
int		ft_toupper(int c); //Esta función convierte el carácter c en mayúscula. Devuelve el carácter c convertido en mayúscula, si c es una letra minúscula. Si c no es una letra minúscula, o no es un carácter, la función devuelve c sin cambios.
int		ft_tolower(int c); //Esta función convierte el carácter c en minúscula. Devuelve el carácter c convertido en minúscula, si c es una letra mayúscula. Si c no es una letra mayúscula, o no es un carácter, la función devuelve c sin cambios.
char	*ft_strchr(const char *str, unsigned char c); //Esta función busca el carácter c en la cadena de caracteres apuntada por str. Devuelve un puntero a la primera ocurrencia de c en str o NULL si no se encuentra.
char	*ft_strrchr(const char *str, unsigned char c); //Esta función busca el carácter c en la cadena de caracteres apuntada por str. Devuelve un puntero a la última ocurrencia de c en str o NULL si no se encuentra.
int		ft_strncmp(const char *str1, const char *str2, size_t n); //Esta función compara los primeros n caracteres de las cadenas de caracteres str1 y str2. Devuelve un entero menor, igual o mayor que cero si str1 es, respectivamente, menor, igual o mayor que str2.
size_t	ft_strlcpy(char *dest, const char *src, size_t size); //Esta función copia hasta size - 1 caracteres desde la cadena de caracteres apuntada por src a la cadena de caracteres apuntada por dest. Si el parámetro size es menor o igual que la longitud de la cadena de caracteres apuntada por src, la cadena de caracteres apuntada por dest debe quedar forzosamente terminada con un carácter nulo. Devuelve la longitud de la cadena de caracteres src.
size_t	ft_strlcat(char *dest, const char *src, size_t size); //Esta función concatena la cadena de caracteres apuntada por src a la cadena de caracteres apuntada por dest. La cadena de caracteres resultante en dest debe quedar forzosamente terminada con un carácter nulo. Devuelve la longitud de la cadena de caracteres resultante en dest.
char	*ft_strnstr(const char *big, const char *little, size_t len); //Esta función busca la primera ocurrencia de la cadena de caracteres little en la cadena de caracteres big, donde no se buscan más de len caracteres. Los caracteres que aparecen después de un carácter nulo no se buscan. Devuelve un puntero a la primera ocurrencia de little en big o NULL si no se encuentra.
int		ft_atoi(const char *str); //Esta función convierte la cadena de caracteres str en un entero de tipo int. Devuelve el entero convertido.
void	*ft_calloc(size_t nitems, size_t size); //Esta función reserva un bloque de memoria para un array de nitems elementos, cada uno de size bytes de longitud, y devuelve un puntero a la zona de memoria reservada. La zona de memoria reservada se inicializa a 0.
char	*ft_strdup(const char *str); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	*ft_substr(char const *s, unsigned int start, size_t len); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	*ft_strjoin(char const *s1, char const *s2); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	*ft_strtrim(char const *s1, char const *set); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	**ft_split(char const *s, char c); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	*ft_itoa(int n); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_striteri(char *s, void (*f)(unsigned int, char*)); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_putchar_fd(char c, int fd); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_putstr_fd(char *s, int fd); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_putendl_fd(char *s, int fd); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_putnbr_fd(int n, int fd); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
t_list	*ft_lstnew(void *content); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_lstadd_front(t_list **lst, t_list *new); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
int		ft_lstsize(t_list *lst); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
t_list	*ft_lstlast(t_list *lst); //Esta función reserva un bloque de memoria para una copia de la cadena de caracteres str, y devuelve un puntero a la zona de memoria reservada.
void	ft_lstadd_back(t_list **lst, t_list *new); //Añade el elemento new al final de la lista.
void	ft_lstdelone(t_list *lst, void (*del)(void*)); //Suprime y libera la memoria del elemento pasado como parámetro, y de todos los elementos que le siguen, con la función del.
void	ft_lstclear(t_list **lst, void (*del)(void*)); //Suprime y libera la memoria de todos los elementos de la lista, con la función del pasada como parámetro, y libera el puntero a la lista.
void	ft_lstiter(t_list *lst, void (*f)(void *)); //Itera sobre la lista lst y aplica la función f al contenido de cada elemento.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); //Itera sobre la lista lst y aplica la función f al contenido de cada elemento. Crea una nueva lista que resulta de las aplicaciones sucesivas de f. Si ocurre algún error, se borra la lista.

#endif //LIBFT_H
