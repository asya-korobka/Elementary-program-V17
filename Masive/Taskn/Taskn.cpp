// Taskn.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE (100)
#define MIN_VALUE (-100)
#define MAX_VALUE (100)

#define bounded_random() ( rand() % ( MAX_VALUE - MIN_VALUE + 1 ) + MIN_VALUE )

int main(void) {
    int array[SIZE], i, max_sequence_head, 
        max_sequence_length, max_sequence_sum, current_sequence_head, 
        current_sequence_length, current_sequence_sum;

    srand(time(NULL));

    for (i = 0; i < SIZE; ++i)
        array[i] = bounded_random();

    printf("All array elements:\n");
    for (i = 0; i < SIZE; ++i)
        printf("%d ", array[i]);

    max_sequence_head = current_sequence_head = -1;
    max_sequence_sum = current_sequence_sum = 0;
    max_sequence_length = current_sequence_length = 0;

    for (i = 0; i <= SIZE; ++i) {
        if (i == SIZE || array[i] <= 0) {
            if (current_sequence_head >= 0) {
                if (current_sequence_sum > max_sequence_sum) {
                    max_sequence_head = current_sequence_head;
                    max_sequence_length = current_sequence_length;
                    max_sequence_sum = current_sequence_sum;
                }
                current_sequence_head = -1;
                current_sequence_length = 0;
                current_sequence_sum = 0;
            }
        }
        else {
            if (current_sequence_head < 0)
                current_sequence_head = i;
            current_sequence_length += 1;
            current_sequence_sum += array[i];
        }
    }

    printf("\nFirst positive sequence with maximum sum:\n");
    for (i = max_sequence_head; i < max_sequence_head + max_sequence_length; ++i)
        printf("%d ", array[i]);
    printf("\nSum: %d\n", max_sequence_sum);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
