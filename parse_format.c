int	parse_format(const char *format, va_list args)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (format[i])
	{
		if (format[i] == '%')
			total += handle_type(format[++i], args);
		else
		{
			write(1, &format[i++], 1);
			total++;
		}
	}
	return (total);
}

