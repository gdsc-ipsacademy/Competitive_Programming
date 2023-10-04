
# Merge Sort

Merge Sort is a popular sorting algorithm known for its efficiency and stability. It operates by repeatedly dividing the unsorted list into sublists and then merging them back together.

- Time Complexity (TC): O(n log n)
- Space Complexity (SC): O(n)

## Algorithm

The Merge Sort algorithm follows these steps:

1. Divide the unsorted list into n sublists, each containing one element (initially).
2. Repeatedly merge sublists to produce new sorted sublists until there is only one sublist remaining.

The merging process combines two sorted sublists into a single, sorted sublist.

## Usage

To use the Merge Sort code provided:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/merge-sort-cpp.git
   ```

2. Compile the C++ code using a C++ compiler (e.g., g++):

   ```bash
   g++ merge_sort.cpp -o merge_sort
   ```

3. Run the compiled program:

   ```bash
   ./merge_sort
   ```

   The program will sort a sample array defined in the `main` function of `merge_sort.cpp`.

## Example

Here's an example of using the Merge Sort algorithm in C++:

```cpp
std::vector<int> arr = {12, 11, 13, 5, 6, 7};
mergeSort(arr, 0, arr.size() - 1);
```

## Contributing

Contributions to this project are welcome. Feel free to fork the repository and submit pull requests for improvements or bug fixes.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgments

- This implementation is provided for educational purposes and is based on the principles of the Merge Sort algorithm.
- For a deeper understanding of Merge Sort and its applications, you can refer to computer science textbooks and online resources.
```

Replace `"your-username"` with your actual GitHub username and customize other project-specific details as needed.