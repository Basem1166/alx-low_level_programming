#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

/**
 * print_elf_header_info - Display information from the ELF header.
 * @header: Pointer to the ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	printf("Magic: %02x %02x %02x %02x\n",
	       header->e_ident[EI_MAG0],
	       header->e_ident[EI_MAG1],
	       header->e_ident[EI_MAG2],
	       header->e_ident[EI_MAG3]);

	printf("Class: %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS64 ? 64 : 32);

	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "Unknown");

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Unknown");

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", header->e_type == ET_EXEC ? "Executable" : "Unknown");

	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Display ELF header information for a given ELF file.
 * @argc: Argument count.
 * @argv: Argument values.
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (98);
	}

	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_header_info(&header);

	close(fd);
	return (0);
}

