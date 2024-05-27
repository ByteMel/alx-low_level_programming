#ifndef MALLOC_FREE_H
#define MALLOC_FREE_H

char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
