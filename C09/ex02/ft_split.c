/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 19:33:58 by rmakoni           #+#    #+#             */
/*   Updated: 2024/08/21 19:43:24 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int s_len(char *str)
{
    int i;
    i = 0;
    while(str[i] !=  '\0')
    {
        i++;
    }
    return i;
}

int is_in_set(char c, char *charset)
{
    int i;

    i = 0;
    while(charset[i] != '\0')
    {
        if(c == charset[i])
            return 1;
        i++;
    }
    return 0;
}

int num_strings(char *str, char *charset)
{
    int i;
    int in_str;
    int s_count;

    i = 0;
    in_str = 0;
    s_count = 0;
    while (str[i] != '\0')
    {
        if(!is_in_set(str[i], charset))
        {
            if(!in_str)
            {
                s_count++;
                in_str = 1;
            }
        }
        else
            in_str = 0;
        i++;
    }
    return s_count;
}
char *split_str(char *str, int start, int end)
{
    char *data;
    int i;
    data = (char *)malloc(end - start + 1);
    i = 0;
    while(start < end)
    {
        data[i] = str[start];
        start++;
        i++;
    }
    data[i] = '\0';
    return data;
}
char **ft_split(char *str, char *charset)
{
    int s_count;
    char **split;
    int i;
    int start;
    int s_countpos;
    
    s_countpos = 0;
    s_count = num_strings(str, charset);
    split =  (char **)malloc((s_count + 1) * sizeof(char*));
    i = 0;
    start = 0;
    while(str[i] != '\0')
    {
        if(is_in_set(str[i], charset))
        {
            if(i > start)
                split[s_countpos++] = split_str(str, start, i);
            start = i + 1;
        }
        i++;
    }
    if(i > start)
        split[s_countpos++] = split_str(str, start, i);
    split[s_countpos] = NULL;
    return split;  
}

void print_split(char **split) {
    int i = 0;
    while (split[i] != NULL) {
        printf("\"%s\"\n", split[i]);
        i++;
    }
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    char **result;

    // Test Case 1: Basic Test
    printf("Test Case 1: Basic Test\n");
    result = ft_split("hello world", " ");
    print_split(result);
    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test Case 2: Multiple Delimiters
    printf("\nTest Case 2: Multiple Delimiters\n");
    result = ft_split("hello,world;this:is;a:test", ",;:");
    print_split(result);
    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test Case 3: Leading and Trailing Delimiters
    printf("\nTest Case 3: Leading and Trailing Delimiters\n");
    result = ft_split(",hello,world,", ",");
    print_split(result);
    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test Case 4: Consecutive Delimiters
    printf("\nTest Case 4: Consecutive Delimiters\n");
    result = ft_split("hello,,,world", ",");
    print_split(result);
    // Free the allocated memory
    for (int i = 0; result[i] != NULL; i++) {
        free(result[i]);
    }
    free(result);

    // Test Case 5: No Delimiters
    printf("\nTest Case 5: No Delimiters\n");
    result = ft_split("helloworld", ",");
    print_split(result);

}


