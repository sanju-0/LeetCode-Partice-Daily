class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       string dig = "123456789";
       vector<int> ans;
        int nl = to_string(low).length();
        int nh = to_string(high).length();
        // window size
        for(int i=nl;i<=nh;++i){
            // for pairing in string
            for(int j=0;j<10-i;j++){
                int num = stoi(dig.substr(j,i));
                if(num >= low && num <= high) ans.push_back(num);
            }
        }
        return ans;
    }
};