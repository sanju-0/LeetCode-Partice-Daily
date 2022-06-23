class Solution {
public:
    int scheduleCourse(vector<vector<int>>& cou) {
     // we Sort the array on the basic of lastday
     sort(cou.begin(),cou.end(),[](auto &a, auto &b) {return a[1] < b[1];});
     // then make priority queue data str
     priority_queue<int> pq;
     int cout = 0;
     for(auto &c : cou){
         int str = c[0], end = c[1];
         if(str + cout <= end){
             cout += str;
             pq.push(str);
         }
         else if(pq.size() and pq.top() > str){
             cout += str - pq.top();
             pq.pop();
             pq.push(str);
         }
      }
        return pq.size();
    }
};