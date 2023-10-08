class Solution {
public:
    int maxProduct(vector<int>& nums) {
         
        
//         int prefix=1;
//             int suffix=1;
//         int n= nums.size();
//          if (n == 1) {
//             return nums[0];
//         }
        
//         int ans= INT_MIN;
        
//         for(int i=0 ;i<n-1; i++){
    
//             if (prefix==0) prefix=1;
//             if (suffix==0) suffix=1;       
        
        
//         prefix = prefix*nums[i];
//         suffix = suffix*nums[n-i-1];
//       ans= max(ans, max(prefix,suffix));
//         }
//         return ans;
        
        
        
          int n = nums.size();
        if (n == 0) {
            return 0; // Handle the case of an empty array
        }
        
        int max_product = nums[0];
        int min_product = nums[0];
        int result = nums[0];
        
        for (int i = 1; i < n; i++) {
            int temp = max_product; // Store the current max_product
            
            // Update max_product considering both the current element and the previous max_product or min_product
            max_product = max({nums[i], nums[i] * max_product, nums[i] * min_product});
            
            // Update min_product considering both the current element and the previous max_product or min_product
            min_product = min({nums[i], nums[i] * temp, nums[i] * min_product});
            
            // Update the result with the maximum product found so far
            result = max(result, max_product);
        }
        
        return result;
    }
};