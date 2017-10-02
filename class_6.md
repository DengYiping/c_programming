# File Handling in C
Input and output can come from/go into files
C treats files as streams of data
A stream is a sequence of bytes(either incoming or outgoing).
The language does not provide basic constructs for file handling, but rather the standard library does.

The file view of C is influenced by Unix.
Open the file - Read / Write - Close

## File Modes
Text streams: sequence of characters logically organized in line. Lines are terminated by a newline '\n' ('\n\r' in windows)
Binary streams: read by bytes

## Open a file
```
FILE* fopen(const char* name, const char* mode)
FILE* fptr;
fptr = fopen("1.txt", "r");
```

## Mode String
String | Meaning
 ----  | ------
 r     |  Open for reading, position at the beginning
 r+    |  Open for reading and writing, positions at the beginning(Overwrite)
 w     |  Open for writing, truncate if exists, positions at the beginning
 w+    |  Open for reading and writing, truncate if exists
 a     |  Append to the end
 a+    |  Open at beginning, writing to the end 

## Reading/ Writing
```
int getc(FILE *fp);
int putc(int c, FILE* fp);
int fscanf(FILE* fp, char* format, ...);
int fprintf(FILE* fp, char* format, ...);
int fgets(char* buf, int size, FILE* stream);//get a lien from a stream
int fputs(char* buf, FILE *restrict stream);//output a line to a stream
```

```
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <wchar.h>
 
int main(void)
{
    char* fname = tmpnam(NULL);
    FILE* f = fopen(fname, "wb");
    fputs("\xff\xff\n", f); // not a valid UTF-8 character sequence
    fclose(f);
 
    setlocale(LC_ALL, "en_US.utf8");
    f = fopen(fname, "rb");
    wint_t ch;
    while ((ch=fgetwc(f)) != WEOF) // attempt to read as UTF-8 fails
          printf("%#x ", ch);
 
    if (feof(f))
        puts("EOF indicator set");
    if (ferror(f))
        puts("Error indicator set");
}
```

