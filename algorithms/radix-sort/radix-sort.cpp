#include <iostream>
using namespace std;

void radix_sort(int array[], int size)
{
    // Find the maximum element in the array.
    int max_element = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max_element)
        {
            max_element = array[i];
        }
    }

    // Get the number of digits in the maximum element.
    int num_digits = 0;
    while (max_element > 0)
    {
        num_digits++;
        max_element /= 10;
    }

    // Create a bucket for each digit.
    int buckets[10] = {0};

    // Sort the elements by their least significant digit.
    for (int i = 0; i < num_digits; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int digit = (array[j] / (10 ^ i)) % 10;
            buckets[digit]++;
        }

        // Distribute the elements into the buckets.
        int index = 0;
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < buckets[j]; k++)
            {
                array[index++] = (array[index] * 10) + j;
            }
            buckets[j] = 0;
        }
    }
}

int main()
{
    int array[] = {5, 3, 2, 1, 4};
    int size = sizeof(array) / sizeof(array[0]);

    radix_sort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;

    return 0;
}
