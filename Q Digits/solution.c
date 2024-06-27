#include <stdio.h>
int main()
{
    int input_size;
    scanf("%d", &input_size);
    for(int i = 0; i < input_size; i++)
    {
        int value;
        scanf("%d", value);
        if(value == 0)
        {
            printf(0);
            continue;
        }
        while(value != 0)
        {
            int num = value % 10;
            printf("%d ", num);
            value /= 10;
        }

    }
}