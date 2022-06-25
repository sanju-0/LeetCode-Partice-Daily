class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);   
       // we are using BS here
     int low = 0;
     int high = nums.size()-1;
     int mid = (low + high)/2;
     
    // Boundary check here 
    if(high==0) return nums[0];
    else if(nums[0] != nums[1]) return nums[0];
    else if(nums[high] != nums[high-1]) return nums[high];         // low - [0,2,2]
        
    // here we go with the BS property
      while(low <= high){
        mid = low + (high -low)/2;                                
          if(nums[mid]!=nums[mid+1] and nums[mid]!=nums[mid-1]) return nums[mid];   // [1,1,2,3,3]
          // [1,1,2,2,3,4,4] - mid = 2 - mid_index%2 = 0
          if(((mid%2)==0 and nums[mid]==nums[mid+1]) or ((mid%2)==1 and nums[mid]==nums[mid-1])) low = mid+1;
          else 
              high = mid-1;
      }
        return -1;
    }
};