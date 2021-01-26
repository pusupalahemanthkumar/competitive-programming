#include <stdio.h>
#include <string.h>

char key[100];
int keyLen;

void divider()
{
    char inp[100]; // dataWord
    printf("Enter input data:- ");
    scanf("%s", inp);
    int inpLen = strlen(inp);
    int i,j;
    for ( i = 0; i < keyLen - 1; ++i)
        inp[inpLen + i] = '0';
    inp[inpLen + keyLen - 1] = '\0';

    inpLen = strlen(inp); 

    char encodedInp[inpLen]; 
    for ( i = 0; i < inpLen; ++i)
    {
        encodedInp[i] = inp[i];
    }
    encodedInp[inpLen] = '\0';

    for ( i = 0; i < inpLen - keyLen + 1;)
    {
        
        for ( j = 0; j < keyLen; ++j)
        {   
            inp[i + j] = (inp[i + j] == key[j] ? '0' : '1');
        }

        while (i < inpLen && inp[i] == '0')
        {
            ++i;
        }
    }

    for (i = inpLen - keyLen + 1; i < inpLen; ++i)
        encodedInp[i] = inp[i];
    
    printf("Encoded input is %s", encodedInp); // codeWord
}

int main()
{
    printf("Enter the key(divisor):- ");
    scanf("%s", key);
    keyLen = strlen(key);
    divider();
    return 0;
}
