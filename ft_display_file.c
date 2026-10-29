#include <unistd.h>
#include <fcntl.h>

int	ft_display (char *file_name)
{
	int	red;
	int	file;
	char	buf;

	file = open(file_name, 0);

	if (file == -1)
		return (0);
	while((red = read(file, &buf, 1)))
	{
		if(red == -1)
			return (0);
		write(1, &buf, 1);
	}
	close(file);
	return (1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if(!ft_display(av[1]))
			write(2, "Cannot read file.\n", 18);
	}
	else if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	else if (ac < 2)
		write(2, "File name missing.\n", 19);	
}
