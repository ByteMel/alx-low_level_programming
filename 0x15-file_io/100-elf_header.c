#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>

/**
 * print_elf_header - prints the ELF header
 * @elf: the ELF header to print
 */

void print_elf_header(Elf64_Ehdr *elf)
{
	unsigned long int i;

	printf("ELF Header:\n");
	printf("Magic: ");
	for (i = 0; i < sizeof(elf->e_ident); i++)
		printf("%02x", elf->e_ident[i]);
	printf("\n");

	printf("Class: %d\n", elf->e_ident[EI_CLASS]);
	printf("Data: %d\n", elf->e_ident[EI_DATA]);
	printf("Version: %d\n", elf->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", elf->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", elf->e_ident[EI_ABIVERSION]);

	printf("Type: ");
	for (i = 0; i < sizeof(elf->e_type); i++)
		printf("%02x", elf->e_type);
	printf("\n");

	printf("Entry point: %ld\n", elf->e_entry);
}

/**
 * main - prints the ELF header
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr elf;
	int fd;
	(void)argc;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (read(fd, &elf, sizeof(elf)) != sizeof(elf))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (memcmp(elf.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Invalid ELF magic number\n");
		exit(98);
	}

	print_elf_header(&elf);

	close(fd);
	return (0);
}
