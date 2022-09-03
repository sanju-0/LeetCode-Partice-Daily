class Solution {
public:
    
    vector<int> ans;
    
    int findSize(int n) {
       int size = 0; 
        while(n > 0) {
            size++;
            n = n/10;
        }
        return size;
    }
    
    void findDigit(int num, int n, int k) {
       // Base case if we get the size of curr number = n, we push number in ans vector. 
      if(findSize(num) == n) {
          ans.push_back(num);
          return;
      }
      // Now we have to see 2nd or other digits so, for that we simple start from 0, we can add 0 in mid and end.
      for(int i=0;i<=9;i++) {
         // in temp we get the last digit of our value/number.
         // We use % function to get out last digit. ex - in 29%10 = 9 last digit and the from last digit we start see it difference to other numbers.
         int temp = num%10;
         if(abs(temp - i) == k) {
             int value = num*10+i;
             findDigit(value, n , k);         
         }
       }
    }
    
    vector<int> numsSameConsecDiff(int n, int k) {
       // For loop for 1st digit which are form 1 to 9.
      for(int i=1;i<=9;i++) {
          findDigit(i,n,k);
      }
        return ans;
    }
};