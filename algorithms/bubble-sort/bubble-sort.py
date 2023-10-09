import random

numbers = []
# Putting random numbers
for _ in range(1, 15):
    numbers.append(random.randint(1, 10))

print("The numbers are:", numbers)


def bubble_sort(l_numbers):
    for j in range(len(l_numbers)):
        for i in range(len(l_numbers) - j - 1):
            if l_numbers[i + 1] < l_numbers[i]:
                l_numbers[i + 1], l_numbers[i] = l_numbers[i], l_numbers[i + 1]
                # temp = l_numbers[i]
                # l_numbers[i] = l_numbers[i + 1]
                # l_numbers[i + 1] = temp

    return l_numbers


print("The ordered numbers are:", bubble_sort(numbers))
