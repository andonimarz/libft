/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 08:36:45 by amarzana          #+#    #+#             */
/*   Updated: 2022/04/12 09:27:44 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	f(unsigned int i, char c);

int	main(void)
{
	char s[] = "HOLA BUENAS";

	ft_strmapi(s, f)
	printf("%s", s);
	return (0);
}

char	f(unsigned int i, char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	i = 0;
	return (c);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
