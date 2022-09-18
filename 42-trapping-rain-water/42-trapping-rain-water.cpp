class Solution {
public:
    int trap(vector<int>& height) {
          if(height.size()==0){
            return 0;
        }
        
        vector<int> ml;
        vector<int> mr;
        
        int maxi=height[0];
        for(int i=0;i<height.size();i++){
            maxi=max(maxi,height[i]);
            ml.push_back(maxi);
        }
        
        maxi=height[height.size()-1];
        for(int i=height.size()-1;i>=0;i--){
            maxi=max(maxi,height[i]);
            mr.push_back(maxi);
        }
        
        reverse(mr.begin(),mr.end());
        
        int ans=0;
        
        for(int i=0;i<height.size();i++){
            ans=ans+(min(ml[i],mr[i])-height[i]);
        }
        
        return ans;
    }
};