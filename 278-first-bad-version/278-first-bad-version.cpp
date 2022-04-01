// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long si=1;
        long ei=n;
        while(si<=ei){
            long mid=(si+ei)/2;
            if(isBadVersion(mid)) ei=mid-1;
            else si=mid+1;
        }
        return ei+1; 
    }
};