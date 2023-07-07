<h1>0x09. C - Static libraries</h1>
<p>In this project, I learnt about static libraries and tried constructing and utilizing them with ar, ranlib, and nm.</p>

<h3>Learning Objectives</h3>
<p>Without the assistance of Google, I was able to explain static libraries to anyone at the end of this project</p>

<h3>General Definitions</h3>
<ul>
<li>What is a static library, how does it work, how to create one, and how to use it</li>
<p>A static library, often known as an archive, is a grouping of precompiled object files (.o files) into a single file. It acts as a container for reusable code that may be linked directly into applications during the compilation process.<br> <b>How a static library works:</b><br> 
1. Development: A static library is constructed by merging many object files (.o files) into a single archive file. These object files are often created by compiling individual source code files (.c files) with a compiler such as GCC.

2. Archiving: The archiver tool is used to create a static library. The archiver utility is commonly referred to as ar on Unix-like platforms. On Windows computers, it is frequently lib.

3. Symbol Table: The static library has a symbol table that lists the names and locations of the library's functions, data, and other symbols. This information enables the linker to resolve symbols when linking the library with a program.

4. Linking: When linking a program with a static library, the linker (e.g., GCC's linker, ld) searches the library for the required symbols and pulls them into the final executable. The resulting executable becomes self-contained, containing the library's code along with the program's code.<br>

<b>How to create one</b><br>
1.<b> Creating a Static Library:</b>
Compile the source files into object files: Run the compiler to compile each source file individually and generate object files (e.g., gcc -c file1.c -o file1.o).
Archive the object files: Use the archiver tool (e.g., ar) to create the static library by combining the object files into an archive file (e.g., ar rcs libexample.a file1.o file2.o).<br>

2.<b> Using a Static Library:</b>
Include the library header file(s): In the C source file where you want to use the library's functions or data, include the appropriate header file(s) using #include.
Link with the static library: When compiling your program, specify the library file using the -l flag followed by the library name (e.g., gcc main.c -L. -lexample -o myprogram). The linker will search for the library and linkit with your program.</p>

<li>Basic usage of ar, ranlib, nm</li>
<p>The ar, ranlib, and nm are command-line tools used in Unix-like systems for managing and inspecting static libraries. Here's a brief overview of their basic usage:</p>
<p> 
1. <b>ar (Archive):</B>
The ar command is used to create, modify, and extract files from static library archives.
Basic usage: ar [options] archive files...
Some commonly used options:
r: Replace or add files to the archive.
c: Create the archive if it doesn't exist.
s: Add an index (symbol table) to the archive.
t: List the contents of the archive.
x: Extract files from the archive.

2. <b>ranlib:</b>
The ranlib command is used to generate an index for a static library, making symbol lookup faster during linking.
Basic usage: ranlib archive
It adds or updates an index in the specified archive file.
The ranlib command is typically used after creating or modifying a static library with ar.

3. <b>nm (Name List):</b>
The nm command is used to list the symbols (functions, variables) defined or referenced in an object file or static library.
Basic usage: nm [options] file...
Some commonly used options:
-A: Display all symbols (including debugging symbols).
-a: Display all symbols in the order they appear in the file.
-t: Display the symbol table with a detailed listing.
<p>These tools are often used together in the process of creating and managing static libraries. ar is used to create or modify the archive, ranlib is used to generate an index for the archive, and nm is used to inspect the symbols in object files or libraries.</p>
</ul>

<h3>Tasks</h3>
<p>
0. A library is not a luxury but one of the necessities of life - Create the static library libmy.a containing all the functions listed below:
`int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);`

1. Without libraries what have we? We have no past and no future - Bcreate_static_lib.sh:ash script that creates a static library called liball.a from all the .c files in the current directory.
</p>
