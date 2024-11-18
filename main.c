#include <stdio.h>
#include "includes/ft_printf.h"
#include <limits.h>

int main(void)
{
	int ret1, ret2;
	void *ptr_null = NULL;
	int num = 42;
	void *ptr = &num;

	printf("\n=== Teste com ponteiro NULL ===\n");
	ret1 = printf("Original: %p\n", ptr_null);
	ret2 = ft_printf("    Seu: %p\n", ptr_null);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	printf("\n=== Teste com ponteiro válido ===\n");
	ret1 = printf("Original: %p\n", ptr);
	ret2 = ft_printf("    Seu: %p\n", ptr);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	printf("\n=== Teste com valor -1 ===\n");
	ret1 = printf("Original: %p\n", (void *)-1);
	ret2 = ft_printf("    Seu: %p\n", (void *)-1);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	printf("\n=== Teste com LONG_MIN e LONG_MAX ===\n");
	ret1 = printf("Original: %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);
	ret2 = ft_printf("    Seu: %p %p\n", (void *)LONG_MIN, (void *)LONG_MAX);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	printf("\n=== Teste com INT_MIN e INT_MAX ===\n");
	ret1 = printf("Original: %p %p\n", (void *)INT_MIN, (void *)INT_MAX);
	ret2 = ft_printf("    Seu: %p %p\n", (void *)INT_MIN, (void *)INT_MAX);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	printf("\n=== Teste com ULONG_MAX e -ULONG_MAX ===\n");
	ret1 = printf("Original: %p %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	ret2 = ft_printf("    Seu: %p %p\n", (void *)ULONG_MAX, (void *)-ULONG_MAX);
	printf("Retorno original: %d\n", ret1);
	printf("Retorno seu    : %d\n", ret2);

	return (0);
}
