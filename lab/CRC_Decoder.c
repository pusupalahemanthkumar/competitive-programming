#include <stdio.h>
#include <string.h>

char key[100];
int keyLen;

void divider()
{
    char inp[100]; // encoded input
    printf("Enter the encoded input data:- ");
    scanf("%s", inp);
    int inpLen = strlen(inp);
    int i,j;

    for (i = 0; i < inpLen - keyLen + 1;)
    {
        for (j = 0; j < keyLen; ++j)
        {
            inp[i + j] = (inp[i + j] == key[j] ? '0' : '1');
        }

        while (i < inpLen && inp[i] == '0')
        {
            ++i;
        }
    }
    int k = 0;
    char syndrome[keyLen];
    for (i = inpLen - keyLen + 1; i < inpLen; ++i, ++k)
    {
        syndrome[k] = inp[i];
    }
    syndrome[k] = '\0';

    printf("Syndrome is %s\n", syndrome);
    for ( i = 0; i <= keyLen - 1; ++i) {
        if(syndrome[i] == '1') {
            printf("Dataword is rejected");
            return;
        }
    }
    printf("Dataword is accepted");
}

int main()
{
    printf("Enter the key(divisor):- ");
    scanf("%s", key);
    keyLen = strlen(key);
    divider();
    return 0;
}
