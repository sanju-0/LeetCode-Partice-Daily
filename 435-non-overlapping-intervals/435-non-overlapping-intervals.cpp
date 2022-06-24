bool camp(vector<int> &a, vector<int> &b){
    return a[1]<b[1];
}
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
     int count = -1;
     if(intervals.size() == 0) return 0;
     sort(intervals.begin(),intervals.end(),camp);
     vector<int> prev = intervals[0];
     for(vector<int> i:intervals){
         // here we remove - [1,2],[1,3] - 2>1 remove
         // [2,3],[3,4] - 3=3 not remove
         if(prev[1] > i[0]){ 
             count++; 
         }
         else{
             // we just update prev
            prev = i; 
         }     
      }
        return count;
    }
};