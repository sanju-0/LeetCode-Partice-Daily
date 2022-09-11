class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
      // We make pair of eff and speed together
     vector<pair<int,int>> v;
     // Min heap
     priority_queue<int, vector<int>, greater<int>> pq;
     // Adding value in vector
     for(int i=0;i<n;i++) {
        v.push_back({efficiency[i], speed[i]});
      }
        
     // keep count of speed 
        long count = 0, ans = 0;
     sort(v.begin(), v.end()); // sort acc. to efficincy.
    
    for(auto i=n-1;i>=0;i--) {
      count +=v[i].second;
      pq.push(v[i].second);
      if(pq.size()>k) {
            count -= pq.top();
            pq.pop();
        }
        ans = max(ans, count*v[i].first);
      }
        return ans%1000000007;
    }
};