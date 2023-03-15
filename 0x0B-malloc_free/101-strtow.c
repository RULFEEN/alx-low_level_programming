#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int count_words(char *str);
int get_word_length(char *str);
char **allocate_memory(int num_words, char *str);
void free_memory(char **words, int num_words);

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int num_words, i, j, k, word_length;

if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);

if (num_words == 0)
return (NULL);

words = allocate_memory(num_words, str);

if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < num_words; ++i)
{
while (str[j] == ' ')
++j;

word_length = get_word_length(&str[j]);

words[i] = malloc((word_length + 1) * sizeof(char));

if (words[i] == NULL)
{
free_memory(words, i);
return (NULL);
}

for (k = 0; k < word_length; ++k, ++j)
words[i][k] = str[j];

words[i][k] = '\0';
}

words[num_words] = NULL;

return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0;

while (*str != '\0')
{
if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
++count;

++str;
}

return (count);
}

/**
 * get_word_length - Gets the length of a word
 * @str: The string containing the word
 *
 * Return: The length of the word
 */
int get_word_length(char *str)
{
int length = 0;

while (str[length] != ' ' && str[length] != '\0')
++length;

return (length);
}

/**
 * allocate_memory - Allocates memory for an array of words
 * @num_words: The number of words in the array
 * @str: The string to split
 *
 * Return: A pointer to the allocated memory
 */
char **allocate_memory(int num_words, char *str)
{
char **words;

words = malloc((num_words + 1) * sizeof(char *));

if (words == NULL)
return (NULL);

return (words);
}

/**
 * free_memory - Frees the memory used by an array of words
 * @words: The array of words to free
 * @num_words: The number of words in the array
 */
void free_memory(char **words, int num_words)
{
int i;

for (i = 0; i < num_words; ++i)
free(words[i]);

free(words);
}
