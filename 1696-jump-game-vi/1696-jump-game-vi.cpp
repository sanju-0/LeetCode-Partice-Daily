class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
     // We make a queue or we can called it our K size window
     deque<int> dq{0};
     for(int i=1;i<nums.size();i++){
         if(dq.front()+k < i) dq.pop_front();
         // add the nums[i] value of nums[top index]
         nums[i] += nums[dq.front()];
         // We make a while loop to see dq empty or if our back elements in queue have less value then current value we simple pop it out.
         while(!dq.empty() and nums[dq.back()] <= nums[i]) 
             dq.pop_back();
         dq.push_back(i);
      }
       return nums.back(); 
    }
};