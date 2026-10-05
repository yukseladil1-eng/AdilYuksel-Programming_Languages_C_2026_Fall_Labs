/*
 * week4_1_dynamic_array.c
 * Author: Adil Yuksel
 * Student ID: 241ADB145
 * Description:
 *   Demonstrates creation and usage of a dynamic array using malloc.
 *   Allocate memory for n integers, read them from the user,
 *   print their sum and average, and then free the memory.
 * 
 *   Output must match the format in the Week 4 instructions exactly
 *   (it is checked by the autograder).
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr = NULL;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
    arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {printf("memory alloction failed\n");
        return 1;
    }
    printf ("enter %d integers:", n);
    for (int i = 0; i < n; i++){       
    if (scanf("%d", &arr[i])!= 1 ){
        printf("invalid input\n");
        free (arr);
        return 1;
    }} 
    int sum = 0;
    for (int i = 0; i < n; i++){
    sum += arr[i];}

    double average = (double)sum / n;
    printf ("Sum = %d\n", sum);
    printf ("Average = %.2f\n", average);
    free (arr);
    // TODO: Allocate memory for n integers using malloc
    // Example: arr = malloc(n * sizeof(int));
    // TODO: Check allocation success
    // If arr is NULL: print "Memory allocation failed." and return 1
    // TODO: Print the prompt "Enter %d integers: " (with n), then read
    //       n integers into the array.
    //       If a value cannot be read: print "Invalid input.",
    //       free the array and return 1
    // TODO: Compute the sum and the average (use floating point for the average)
    // TODO: Print the results exactly as:
    //       Sum = <sum>
    //       Average = <average with 2 decimals, %.2f>
    // TODO: Free allocated memory
    (void)arr;  // remove this line once you use arr

    return 0;
}
