class Solution {
public:
    double average(vector<int>& salary) {
       sort(salary.begin(),salary.end());
           double ans = 0;
           double count = 0;
           int l = salary.size();
           for(int i=1;i<=l-2;i++){
               ans = ans + salary[i];
               count++;
       } 
        return (ans/count);
    }
};