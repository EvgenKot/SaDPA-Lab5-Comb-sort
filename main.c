#include <stdio.h>
#include <stdlib.h>


/*
Ращупкин Евгений КЭ-203
28 вариант
Lab5
Сортировка Прямым выбором
В одномерном массиве упорядочить нечетные элементы, 
оставив четные на местах.
*/

void PrintArray(int *arr, int n){
    int i;
    for (i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
}


int main() {
    int *arr;
    int n;
    int i;

    printf("Len of arr: ");
    scanf("%d", &n);
    
    arr = (int*)malloc(n * sizeof(int));
    for (i = 0; i<n; i++){
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    PrintArray (arr, n);
    
    

    
    free(arr);
    return 0;
}