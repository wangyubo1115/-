#include<stdio.h>
void reverse_string(char* string)
{
    if (*string == '\0')
    {
        return;
    }
    reverse_string(string + 1);
    printf("%c", *string);
}
int main()
{
    char string[] = "abcdefghijk";
	printf("Ô­×Ö·û´®Îªabcdefghijk\n"); 
    reverse_string(string);
   
}
