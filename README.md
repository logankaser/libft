# mini libc
### A toy libc reimplementation with some extra features.

### Features

#### Number to string
`atof atoi itoa itoa_base utoa_base`  
#### Predicates
`isalnum isalpha isascii isdigit isprint memcmp strcmp strncmp strnequ`  
#### List linked list manipulation
`lstadd lstdel lstdelone lstfind lstiter lstlen lstmap lstnew lstpush lstpop lstrm`  
#### Raw memory manipulation
`bzero memalloc memccpy memchr  memcpy memdel memmove memset`  
#### Simple printing
`putchar putchar_fd putendl putendl_fd puterror putintarray putmem putnbr putnbr_fd putstr putstr_fd putstrarray`  
#### String Manipulation
`strcat strchr strclr strcpy strdel strdup strequ string striter striteri strjoin strlcat 
strlen strmap strmapi strncat strncpy  strnew strnstr strrchr strsplit strstr strsub
strtrim str_has_only strprepend strappend
tolower toupper wchar_utf8`  
#### Ulility functions
`qsort get_next_line printf`  

### Extra Features
* Vectors (boxed and unboxed)
