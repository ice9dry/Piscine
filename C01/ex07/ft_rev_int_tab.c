void ft_rev_int_tab(int *tab, int size)
{
    int start = 0;
    int end = size - 1;
    int temp;

    while (start < end)
    {
        // Swap the elements at the start and end positions
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;

        // Move the start pointer forward and the end pointer backward
        start++;
        end--;
    }
}

#include <stdio.h>

int main()
{
    int arr[] = {10, 32, 13, 84, 59};
    int size = sizeof(arr) / sizeof(arr[0]);

    ft_rev_int_tab(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}