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
	printf("ԭ�ַ���Ϊabcdefghijk\n"); 
    reverse_string(string);
   
}
