def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr


my_list = [5, 2, 8, 3, 9, 1]
sorted_list = selection_sort(my_list)
print(sorted_list)
