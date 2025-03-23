void ft_sort_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (tab[j] > tab[j + 1])
            {
                // Swap the elements
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int tab[] = {5, 20, 9, 100, -5, 6, 89, 98, 40};
    int size = sizeof(tab) / sizeof(tab[0]);

    ft_sort_int_tab(tab, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}