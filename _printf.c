#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);
<<<<<<< HEAD
	va_start(list, format);
=======

	va_start(list, format);

>>>>>>> 004ddf8849044f7282f0b7167f9248c23b4abc5a
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			++i;
<<<<<<< HEAD
			printed = handle_print(format, &i, list, buffer,flags, width, precision, size);
=======
			printed = handle_print(format, &i, list, buffer,
				flags, width, precision, size);
>>>>>>> 004ddf8849044f7282f0b7167f9248c23b4abc5a
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}
<<<<<<< HEAD
	print_buffer(buffer, &buff_ind);
	va_end(list);
=======

	print_buffer(buffer, &buff_ind);

	va_end(list);

>>>>>>> 004ddf8849044f7282f0b7167f9248c23b4abc5a
	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
<<<<<<< HEAD
=======

>>>>>>> 004ddf8849044f7282f0b7167f9248c23b4abc5a
	*buff_ind = 0;
}
