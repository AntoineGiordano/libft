/*HEADER*/

#include "libft.h"

int	ft_filereplace(char *file, char *target, char *replace)
{
	char	*line;
	int	fd;
	int	ret;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	line = NULL;
	while ((ret = get_next_line(fd, &line)))
	{
		if (ret == -1)
			return (1);
		ft_strreplace(line, target, replace);
		ft_strdel(&line);
	}
	ft_strdel(&line);
	close(fd);
	return (0);
}
