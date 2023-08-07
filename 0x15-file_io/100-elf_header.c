#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_elf_header_info - Prints the information,
 * contained in the ELF header.
 * @header: A pointer to the ELF header structure.
 *
 * Description: This function prints various information,
 * about the ELF header,
 * such as magic numbers, class, data, version, OS/ABI, ABI version,
 * type, and entry point address.
 */
void print_elf_header_info(Elf64_Ehdr *header);
void close_elf(int elf);

void print_elf_header_info(Elf64_Ehdr *header)
{
	unsigned int e_type;
	unsigned long int e_entry;
	int i;

	printf("ELF Header:\n");
	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}

	printf("  Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	printf("  Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	printf("  Version: %d", header->e_ident[EI_VERSION]);
	switch (header->e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)\n");
			break;
		default:
			printf("\n");
			break;
	}

	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}
	printf("  ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	e_type = header->e_type;
	printf("  Type:                              ");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}

	e_entry = header->e_entry;
	printf("  Entry point address:               ");
	if (header->e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (header->e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}
/**
 * close_elf - Closes an ELF file.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: This function closes the ELF file associated,
 * with the given file descriptor.
 * If the file cannot be closed, it prints an error message,
 * and exits with code 98.
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the ELF header,
 * at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: This function is the entry point of the program.
 * It reads an ELF file, extracts and prints the ELF header,
 * information using the print_elf_header_info,
 * function, and then closes the file using the close_elf function.
 * If the number of arguments is incorrect or there's an,
 * issue with file operations, the function prints an error,
 * message and exits with code 98.
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd, read_result;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <elf-file>\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(98);
	}

	read_result = read(fd, header, sizeof(Elf64_Ehdr));
	if (read_result == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	print_elf_header_info(header);
	free(header);
	close_elf(fd);

	return (0);
}
