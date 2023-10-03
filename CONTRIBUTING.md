# Contributing to GDSC Competitive Programming Repository

Thank you for considering contributing to the GDSC Competitive Programming Repository! Your contributions help us build a valuable resource for the community. Please take a moment to read the following guidelines to ensure a smooth and effective contribution process.

## Before You Begin

1. **Check for Open Issues**: Before creating a new issue or pull request, please check the issues section to see if the topic or problem you wish to address has already been discussed or is being worked on. Feel free to join existing discussions or contribute to ongoing efforts.

2. **Fork the Repository**: If you plan to make significant changes, it's a good practice to fork the repository. This allows you to work in your own space and submit pull requests when you're ready.

## Code Practices

When contributing code to this repository, please follow best practices:

- Write clean, readable, and well-documented code.
- Use meaningful variable and function names.
- Follow the code style and conventions of the language you're working in (e.g., C++, JavaScript).
- Don't push executables like .exe

## Sample in JavaScript

```js
function binarySearch(arr, x) {
    let left = 0;
    let right = arr.length - 1;

    while (left <= right) {
        let mid = Math.floor(left + (right - left) / 2);
        if (arr[mid] === x) {
            return mid; // Target found
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Target not found
}

function main() {
    let arr = [1, 2, 3, 4, 5];
    let x = 3;

    let index_x = binarySearch(arr, x);

    if (index_x !== -1) {
        console.log(`Target ${x} found at index ${index_x}`);
    } else {
        console.log(`Target ${x} not found in the array.`);
    }
}

main();
```

## Fixing Issues

If you decide to work on an existing issue or bug, please follow these steps:

1. **Assign Yourself**: If you plan to work on an issue, assign yourself to it to let others know that you're handling it.

2. **Fork the Repository**: If you haven't already, fork the repository to your GitHub account.

3. **Create a Branch**: Create a new branch for your work, preferably with a descriptive name related to the issue you're addressing.

4. **Work on the Issue**: Make the necessary changes, additions, or fixes in your branch.

5. **Test Your Changes**: Ensure your changes do not introduce new issues and that existing functionality remains intact.

6. **Create a Pull Request**: When you're ready, submit a pull request to the original repository's `main` branch. Include a clear description of your changes and reference the issue you're addressing.


## Additional Resources

Thank you for contributing to the GDSC Competitive Programming Repository! Your contributions help make this a valuable resource for our community.