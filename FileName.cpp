#include<stdio.h> 
int main()
{
    int arr[11][11];
    int a = 2, b = 2;
    for (int a = 1; a <= 10; a++)
        for (int b = 1; b <= 10; b++)
            scanf("%d", &arr[a][b]);
    while (arr[a][b] != 2)
    {
        arr[a][b] = 9;
        if (arr[a][b + 1] != 1) b += 1;
        else if (arr[a + 1][b] != 1) a += 1;
        else break;
    }
    arr[a][b] = 9;
    for (int a = 1; a <= 10; a++)
    {
        for (int b = 1; b <= 10; b++)
            printf("%d ", arr[a][b]);
        printf("\n");
    }
}