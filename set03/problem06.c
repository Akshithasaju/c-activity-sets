#include <stdio.h>
#include <string.h>

void input_string(char* a, char* b);
int sub_str_index(char* string, char* substring);
void output(char *string, char *substring, int index);

int main() 
{
    char string[100], substring[100];
    int index;
    input_string(string, substring);
    index = sub_str_index(string, substring);
    output(string, substring, index);
    return 0;
}

void input_string(char* a, char* b) 
{
    printf("Enter a string: ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = '\0';

    printf("Enter a substring: ");
    fgets(b, 100, stdin);
    b[strcspn(b, "\n")] = '\0'; 
}

int sub_str_index(char* string, char* substring) 
{
    int string_length = strlen(string);
    int sub_length = strlen(substring);
    int i, j;

    for (i = 0; i <= string_length - sub_length; i++) 
    {
        for (j = 0; j < sub_length; j++) 
        {
            if (string[i + j] != substring[j]) 
            {
                break;
            }
        }
        if (j == sub_length) 
        {
            return i; 
        }
    }
    return -1;
}

void output(char *string, char *substring, int index) 
{
    if (index != -1) 
    {
        printf("The substring \"%s\" is found in \"%s\" at index %d.\n", substring, string, index);
    } else 
    {
        printf("The substring \"%s\" is not found in \"%s\".\n", substring, string);
    }
}
