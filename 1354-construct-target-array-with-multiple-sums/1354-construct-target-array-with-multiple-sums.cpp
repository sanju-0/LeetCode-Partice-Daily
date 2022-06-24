class Solution {
public:
    bool isPossible(vector<int>& target) {
      priority_queue<int> pq;
      unsigned int sum = 0;
        for(int n:target){
            sum += n;   // sum of target array
            pq.push(n);  // push all the element of array into queue
        }
        while(pq.top() != 1){
            int max = pq.top(); // max value
            pq.pop();   // remove max value
            sum -= max;
            if(sum>=max or sum<1) return false;
            /* max-=sum;    // we get one here if it gone true
            pq.push(max);
            sum+=max;  */
            max%=sum;
            sum+=max;
            pq.push(max ? max : sum);
        }
        return true;
    }
};