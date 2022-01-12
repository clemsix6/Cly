/*
** EPITECH PROJECT, 2022
** Cly
** File description:
** cly_string.h
*/

#ifndef CLY_CLY_STRING_H
#define CLY_CLY_STRING_H

int cly_strlen(char const *str);
int cly_putchar(char const c);
int cly_putstr(char const *str);
int cly_revstr(char *str);

int cly_strcpy(char const *src, char *dest);
int cly_strncpy(char const *src, char *dest, int n);

int cly_append_char(char **str, char c);

int cly_strcmp(char const *s1, char const *s2);
int cly_strncmp(char const *s1, char const *s2, int n);

#endif //CLY_CLY_STRING_H
