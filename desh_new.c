#include <stdio.h>
#define ENCRYPTED_MESSAGE "SVVRZSPRLFVBOHJRLKTL"
#define SIZE 26
#define KEY 7

int main (void)
{
char alphabet[SIZE] =  {'A', 'B', 'C', 'D', 'E', 'F',
                        'G', 'H', 'I', 'J', 'K', 'L',
                        'M', 'N', 'O', 'P', 'Q', 'R',
                        'S', 'T', 'U', 'V', 'W', 'X',
                        'Y', 'Z'};

char encrypted_alphabet [SIZE] = {"\0"};

for (int i = 0; i < SIZE; i++)
{
    printf("%c", alphabet[i]);
}

puts("");

for (int i = 0; i < SIZE; i++)
{
    int offset = (i + KEY) % SIZE;
    encrypted_alphabet[i] = alphabet[offset];
    printf("%c", encrypted_alphabet[i]);
}

puts("");

for (int i = 0; i < 20; i++)
{
    for (int j = 0; j < SIZE; j++)
        {
          if (ENCRYPTED_MESSAGE[i] == encrypted_alphabet[j]) 
         {
               printf("%c", alphabet[j]);
         }
        }
}

return 0;
}