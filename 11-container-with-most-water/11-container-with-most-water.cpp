class Solution {
public:
    int maxArea(vector<int>& height) {
      int left=0, right=height.size()-1, ht=0, water=0;
        
        while(left<right)
        {
            ht = min(height[left], height[right]);
            water = max((right-left)*ht, water);
            
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return water;
    }
};

  