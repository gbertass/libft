# Libft

**libft** is a custom C library created for the 42 school curriculum. It includes a variety of functions commonly found in the C Standard Library, as well as some utilities we need for other 42 projects.

## Project Overview

The purpose of this project is to create your own standard C library by implementing various functions that we typically use, including memory management, string manipulation, and basic math.

## Functions Implemented

- **Memory management**
  - `ft_memset()`
  - `ft_bzero()`
  - `ft_memcpy()`
  - `ft_memmove()`
  - `ft_memchr()`
  - `ft_memcmp()`
  - `ft_calloc()`
  
- **String manipulation**
  - `ft_strlen()`
  - `ft_strdup()`
  - `ft_strcpy()`
  - `ft_strncpy()`
  - `ft_strcat()`
  - `ft_strncat()`
  - `ft_strchr()`
  - `ft_strrchr()`
  - `ft_strstr()`
  - `ft_strncmp()`
  - `ft_strlcpy()`
  - `ft_strlcat()`

- **Character manipulation**
  - `ft_isalpha()`
  - `ft_isdigit()`
  - `ft_isalnum()`
  - `ft_isascii()`
  - `ft_isprint()`
  - `ft_toupper()`
  - `ft_tolower()`

- **Conversion functions**
  - `ft_atoi()`
  - `ft_itoa()`

- **Linked lists**
  - `ft_lstnew()`
  - `ft_lstadd_front()`
  - `ft_lstsize()`
  - `ft_lstlast()`
  - `ft_lstadd_back()`
  - `ft_lstdelone()`
  - `ft_lstclear()`
  - `ft_lstiter()`
  - `ft_lstmap()`

## How to Use

1. Clone the repository:
   ```bash
   git clone https://github.com/your_username/libft.git

2. Navigate to the project folder:
   ```bash
   cd libft
   ```
3. Compile the library with:
      ```bash
      make
      ```
4. Link the library to your project:
      ```bash
      gcc -L. -lft your_file.c -o your_program
      ```
5. Clean the object files:
      ```bash
      make clean
      ```
6. Clean everything (including the library files):
      ```bash
      make fclean
      ```
7. Rebuild the library:
      ```bash
      make re
      ```
  


