## Unformatedd I/O:
- Functions like putc(), getc(),puts(), gets()

### Unformatedd I/O in <stdio.h>:
- int getchar(int ch);    // getc(stdin)
- int putchar(int ch);    // putc(stdin)
- char *fgets(char *restrict str, int count, FILE *restrict stream);  // never use gets()
- int puts(const char *str);

#### getchar()
- C getchar is a standard library function that takes a single input character from standard input. The major difference between getchar() and getc() is that getc() can take input from any number of input streams but getchar() can take input from a single standard input stream.
- Just like getchar(), there is also a function called putchar() that prints only one character to the standard output stream.
- getchar() function does not take any parameters.

#### putchar()
- The putchar(int ch) method in C is used to write a character, of unsigned char type, to stdout. This character is passed as the parameter to this method.

- Syntax:
-- int putchar(int ch)

#### fgets()
- The fgets() reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first.
- Syntax

char *fgets (char *str, int n, FILE *stream);

### puts()
- In C programming language, puts() is a function defined in header <stdio.h> that prints strings character by character until the NULL character is encountered. The puts() function prints the newline character at the end of the output string.

- Syntax

int puts(char* str);

### Formatted I/O:

- Functions like printf(), scanf(), sprinf()
- int <strong>scanf</strong>(const char *restrict format, ...);
- int printf(const char *restrict format, ...);
- int sprintf(char *restrict buffer, const char *restrict format, ...);

### File Access
- The FILE type
- File handling functions
- fopen(), fclose()

#### fopen()
- FILE *fopen(const char *restrict filename, const char *restrict mode);
- mode: {r, w, a, r+, w+, a+}
- Returns a FILE handle on success, or NULL on failure

#### fclose()
- int fclose(FILE *<strong>stream</strong>);

### File Access Function
- get(), putc()
- fgets(), fputs()
- fprintf(), fscanf()



