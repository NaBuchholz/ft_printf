#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int	result;

	result = write(1, "nath", 4);

	printf("\n%d\n", result);
	return (0);
}
