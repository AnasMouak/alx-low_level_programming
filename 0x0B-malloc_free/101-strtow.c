#include <stdlib.h>
#include "main.h"

/**
 * wordcount - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

int wordcount(char *s)
{
    int i;
    int countw = 0;
    int inw = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            inw = 0;
        }
        else
        {
            if (!inw)
            {
                inw = 1;
                countw++;
            }
        }
    }
    return countw;
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
  char **s, *tmp;
  int i, j, words, k = 0, c = 0, start = 0, end, char_index;
    
    if (str == NULL || *str == '\0')
    {
        return NULL;
    }

    words = wordcount(str);

    if (words == 0)
    {
        return NULL;
    }

    s = (char **)malloc((words + 1) * sizeof(char *));
    
    if (s == NULL)
    {
        return NULL;
    }
    
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            if (c)
            {
                tmp = (char *)malloc(c + 1);
                
                if (tmp == NULL)
                {
                    for (j = 0; j < k; j++)
                    {
                        free(s[j]);
                    }
                    free(s);
                    return NULL;
                }

                end = i;
                char_index = 0;
                
                while (start < end)
                {
                    tmp[char_index++] = str[start++];
                }

                tmp[char_index] = '\0';
                s[k] = tmp;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
        {
            start = i;
        }
    }
    
    if (c)
    {
        tmp = (char *)malloc(c + 1);
        
        if (tmp == NULL)
        {
            for (j = 0; j < k; j++)
            {
                free(s[j]);
            }
            free(s);
            return NULL;
        }
        
        end = i;
        char_index = 0;
        
        while (start < end)
        {
            tmp[char_index++] = str[start++];
        }

        tmp[char_index] = '\0';
        s[k] = tmp;
        k++;
    }

    s[k] = NULL;
    return s;
}
