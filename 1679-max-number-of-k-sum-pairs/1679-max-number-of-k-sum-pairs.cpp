class Solution {
public:
    int maxOperations(vector<int>& num, int k) {
       sort(num.begin(), num.end());
      int ans = 0;
      int i=0, j=num.size()-1;
      while(i < j){
        if(num[i] + num[j] == k){     // found elements just increase counter
          ans++; i++; j--;
        } 
		else if(num[i] + num[j] > k) j--;  // sum is large so decrease the bigger element, i.e. jth element
        else i++;    // sum is small so increase the smaller element, i.e. ith element
      }
      return ans;  
    }
};

/*
We will sort the array, and start summing of elements from front and back
if sum == k means they can be removed but we will not remove, we will just count
if sum > k then last element must me small so j--
if sum < k then first element should be bigger so i++
TC - O(NlogN);
*/