class Solution {
    public int maxOnes(int arr[], int k) {
        int left = 0;
        int maxi = 0;
        int zeros = 0;
        for(int i = 0; i < arr.length; i++){
            if(arr[i] == 0){
                zeros++;
            }
            while(zeros > k){
                if(arr[left] == 0){
                    zeros--;
                }
                left++;
            }
            maxi = Math.max(maxi, i - left + 1);
        }
        
        return maxi;
    }
}