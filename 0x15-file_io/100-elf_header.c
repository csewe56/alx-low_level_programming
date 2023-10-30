#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

/**
 * display_elf_header - Displays information from the ELF header.
 * @elf_header: A pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *elf_header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");

	printf("  Class:                             %s\n",
			(elf_header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
			(elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
	printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %d\n", elf_header->e_type);
	printf("  Entry point address:               0x%lx\n", (unsigned long)elf_header->e_entry);
}

/**
 * main - Displays information from the ELF header of an ELF file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr) != sizeof(Elf64_Ehdr)))
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		close(fd);
		return (98);
	}

	close(fd);

	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		return (98);
	}

	printf("ELF Header:\n");
	display_elf_header(&elf_header);

	return (0);
}


