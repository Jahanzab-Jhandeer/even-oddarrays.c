#include<stdio.h>
// Write a program in C to separate odd and even integers in separate arrays
int main () {
    int arr[100], odd[100], even[100],   i, j=0, k=0, n;

    printf("put the number of elements to stored :");
    scanf("%d" , &n);
    printf("input %d elements of array \n" , n);
    for(i=0;i<n;i++) {
        printf("Elements %d :" , i);
        scanf("%d" , &arr[i]);
    }
    for(i=0;i<n;i++) {
        
        if(arr[i]%2 == 0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }
        printf("The even elements are :\n");
        for(i=0;i<j;i++) {
            printf("%d\t" , even[i]);
        }
        printf("The odd elements are :\n");
        for(i=0;i<k;i++) {
            printf("%d\t" , odd[i]);
        }
   return 0;
    }

