class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
      int i = 0;
      priority_queue<int> pq;
      for(i;i<h.size()-1;i++){
        if(h[i+1]<=h[i]) continue;
        int diff = h[i+1] - h[i];
        if(diff <= b){
            b-=diff;
            pq.push(diff);
        }
          else if(l>0){
              if(pq.size()){
              int temp = pq.top();
              if(temp > diff){
                  b+=temp;
                  pq.pop();
                  pq.push(diff);
                  b-=diff;
              }   
              }
              l--;
          }
          else break;
      }
        return i;
    }
};