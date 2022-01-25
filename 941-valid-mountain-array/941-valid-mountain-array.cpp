class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n < 3) return false;
        int left = 0; // pointer 1
        int right = n-1; // pointer 2
        while(left + 1 < n-1 and arr[left] < arr[left+1]) left++; 
        while(right - 1 > 0 and arr[right] < arr[right -1]) right--;
        
        return left==right;
    }
};