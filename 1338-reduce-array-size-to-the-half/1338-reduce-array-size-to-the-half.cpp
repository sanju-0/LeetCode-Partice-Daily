class Solution {
public:
    int minSetSize(vector<int>& arr) {
      map<int,int> mp;
      for(auto x:arr) {
        mp[x]++;  
      }
    // We use multimap becuase we need key = occurance of number, Val = value of number
    multimap<int,int,greater<int>> mmp;         // greater <int> for making map in decressing oder.
    for(auto it:mp) {
        mmp.insert({it.second, it.first})++;
    }
     int n = arr.size();
     int sum = n;
     int count = 0;
     for(auto it=mmp.begin();it!=mmp.end();it++) {
        sum-=it->first;
        count++;
         if(sum <= n/2) {
             return count;
         }
      }
     return count;
    }
};