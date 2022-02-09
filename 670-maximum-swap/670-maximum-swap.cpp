class Solution {
public:
    int maximumSwap(int num) {
     int max_no = -1;
     int max_no_index = -1;
     int l = -1;
     int r = -1;
        string num_in_str = to_string(num);
        for(int i=num_in_str.size()-1;i>=0;i--){
            if(num_in_str[i] > max_no){
                max_no = num_in_str[i];
                max_no_index = i;
                continue;
            }
            if(num_in_str[i] < max_no){
                l = i;
                r = max_no_index;
            }
        }
        if(l == -1) return num;
        swap(num_in_str[l], num_in_str[r]);
        return stoi(num_in_str);
    }
};