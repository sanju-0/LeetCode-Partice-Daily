class Solution {
public:
    bool canEatInTime(vector<int>& piles, int k, int h){
        int speed = 0;
        for(int pile : piles){
            int div = pile / k;
            speed += div;
            if(pile % k != 0) speed++;
        }
        return speed <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
     int low = 1;
     int high = 1000000000;
        
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(canEatInTime(piles, mid, h)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};