#include <stdio.h>
#include <stdlib.h>

int sm = 1, full = 0, empty = 3, x = 0;

int main()
{
    int n;
    void producer();
    void consumer();
    int wait(int);
    int signal(int);
    printf("\n1.Producer\n2.Consumer\n3.Exit");
    while (1)
    {
        printf("\nEnter your choice:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            if ((sm == 1) && (empty != 0))
                producer();
            else
                printf("Buffer is full!!");
            break;
        case 2:
            if ((sm == 1) && (full != 0))
                consumer();
            else
                printf("Buffer is empty!!");
            break;
        case 3:
            exit(0);
            break;
        }
    }

    return 0;
}

int wait(int s)
{
    return (--s);
}

int signal(int s)
{
    return (++s);
}

void producer()
{
    while (empty > 0)
    {
        sm = wait(sm);
        full = signal(full);
        empty = wait(empty);
        x++;
        printf("\nProducer produces the item %d", x);
        sm = signal(sm);
    }
}

void consumer()
{
    while (empty < 3)
    {
        sm = wait(sm);
        full = wait(full);
        empty = signal(empty);
        printf("\nConsumer consumes item %d", x);
        x--;
        sm = signal(sm);
    }
}