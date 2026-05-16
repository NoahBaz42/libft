*This project has been created as part
of the 42 curriculum by nbaz-sil.*

# Description
*Libft* is a custom C library that includes both libc functions and additional functions that will be useful in future projects.

This library demonstrates an understanding of memory management, string manipulation, pointer arithmetic and data structures in C, As well as a starting point on undertanding linked lists.

# Instructions

### MakeFile
Command | Description
-- | --
make, make all | build library
make clean |  remove object files
make fclean | remove object files and static library
make re | run fclean then all

### Compilation
Functions such as strlcpy, strlcat, and bzero, are not included by default in glibc so to test them we should compile with the flag -lsbd and include the <bsd/string.h> library.

## Library Description

### Part 1 - Libc Functions
| Function | Description |
|----------|-------------|
| ft_isalpha | Returns 1 if char is alphabetic, 0 otherwise |
| ft_isdigit | Returns 1 if char is a digit, 0 otherwise |
| ft_isalnum | Returns 1 if char is alphanumeric, 0 otherwise |
| ft_isascii | Returns 1 if char is in the ASCII table, 0 otherwise |
| ft_isprint | Returns 1 if char is printable, 0 otherwise |
| ft_strlen | Returns the length of a string |
| ft_memset | Fills n bytes of memory with a given value |
| ft_bzero | Sets n bytes of memory to zero |
| ft_memcpy | Copies n bytes from src to dst (no overlap) |
| ft_memmove | Copies n bytes safely, handles overlapping memory |
| ft_strlcpy | Copies a string into a sized buffer, returns src length |
| ft_strlcat | Appends a string to a sized buffer, returns total length |
| ft_toupper | Converts a lowercase letter to uppercase |
| ft_tolower | Converts an uppercase letter to lowercase |
| ft_strchr | Returns pointer to first occurrence of char in string |
| ft_strrchr | Returns pointer to last occurrence of char in string |
| ft_strncmp | Compares up to n characters of two strings |
| ft_memchr | Searches for a byte value in a memory area |
| ft_memcmp | Compares two memory areas byte by byte |
| ft_strnstr | Finds the first occurrence of a substring within n bytes |
| ft_atoi | Converts a string to an integer |
| ft_calloc | Allocates memory for an array and zeroes it |
| ft_strdup | Allocates and returns a duplicate of a string |

### Part 2 - Additional Functions
| Function | Description |
|----------|-------------|
| ft_substr | Extracts a substring from a string |
| ft_strjoin | Concatenates two strings into a new one |
| ft_strtrim | Removes characters from a set at both ends of a string |
| ft_split | Splits a string by a delimiter into an array of strings |
| ft_itoa | Converts an integer to its string representation |
| ft_strmapi | Applies a function to each char, returns new string |
| ft_striteri | Applies a function to each char in-place |
| ft_putchar_fd | Writes a character to a file descriptor |
| ft_putstr_fd | Writes a string to a file descriptor |
| ft_putendl_fd | Writes a string followed by \n to a file descriptor |
| ft_putnbr_fd | Writes an integer to a file descriptor |

### Part 3 — Linked List Functions

Uses the following structure defined in libft.h:
```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

| Function | Description |
|----------|-------------|
| ft_lstnew | Creates a new list node |
| ft_lstadd_front | Adds a node at the beginning of the list |
| ft_lstsize | Returns the number of nodes in the list |
| ft_lstlast | Returns the last node of the list |
| ft_lstadd_back | Adds a node at the end of the list |
| ft_lstdelone | Frees a single node using a delete function |
| ft_lstclear | Frees all nodes and sets the list pointer to NULL |
| ft_lstiter | Applies a function to each node's content |
| ft_lstmap | Creates a new list by applying a function to each node |

# Resources
- Manual pages;
- StackOverflow & GeeksforGeeks;
- The friends we make on the way.