
import java.util.*;

class Main {
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // Input the size of the array
        int arr[] = new int[n];

        // Input array elements
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        // Calling maxSubarraySum() method
        long result = maxSubarraySum(arr, n);
        System.out.println(result);
        
        scanner.close();
    }

    // Function to find the sum of contiguous subarray with maximum sum.
    static long maxSubarraySum(int arr[], int n) {
        long res = Integer.MIN_VALUE;
        long sum = 0;

        for (int e : arr) {
            sum += e;
            res = Math.max(res, sum);
            if (sum < 0) sum = 0;
        }

        return res;
    }
}
