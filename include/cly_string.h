/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_string.h
*/

#ifndef CLY_CLY_STRING_H
#define CLY_CLY_STRING_H

int cly_strlen(char const *str);
int cly_putchar(char c);
int cly_putstr(char const *str);
int cly_revstr(char *str);
int cly_strcpy(char *dest, char const *src);
int cly_strncpy(char *dest, char const *src, int n);
char *cly_append_char(char *str, char c);
int cly_dyn_append_char(char **str, char c);
int cly_strcmp(char const *s1, char const *s2);
int cly_strncmp(char const *s1, char const *s2, int n);
char *cly_strtok(char *str, char *separators);
char **cly_str_split(const char *str, char separator);
int cly_strcat(char *dest, char const *src);
char *cly_dyn_strcat(char const *str1, char  const *str2);

#endif //CLY_CLY_STRING_H
