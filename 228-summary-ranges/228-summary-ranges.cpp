class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
      vector<string> r;
	    for (auto p(0), q(0); q<size(nums); ++q)
		if (q+1==size(nums) || nums[q+1]!=nums[q]+1)
		{
			r.emplace_back( p!=q ? to_string(nums[p])+"->"+to_string(nums[q]) : to_string(nums[p]) );
			p=q+1;
		}
	return r;  
    }
};