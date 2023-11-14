#include <stdio.h>

int search(int w, int x, int y[], int z);

int main(void)
{
    int n;
    printf("Digite um valor a ser buscado dentro do vetor: ");
    scanf("%i", &n);
    
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    
    int s = (sizeof(a) / sizeof(int));
    int m = s /2;
    
    int check = search(m, n, a, s);
    
    if (check == 0)
    {
        printf("O valor buscado está contido no vetor\n");
    }
    else
    {
        printf("O valor buscado não está contido no vetor\n");
    }
}

int search(int w, int x, int y[], int z)
{
    if (x == y[w])
    {
        return 0;
    }
    else if (x > y[w])
    {
        w += w / 2;
        if (w < 1)
        {
            w = 1;
        }
        search(w, x, y, z);
    }
    else if (x < y[w])
    {
        w /= 2;
        search(w, x, y, z);
    }
    else if (x < y[0] || x > y[z])
    {
        return 1;
    }
}