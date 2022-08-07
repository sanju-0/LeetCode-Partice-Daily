class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
      sort(people.begin(), people.end());
      int ptr1 = 0;
      int ptr2 = people.size()-1;
      int number_of_boats = 0;
      
      while(ptr1 <= ptr2) {
          // when both go.
         if(people[ptr1] + people[ptr2] <= limit) {
             ptr1++;
             ptr2--;
             number_of_boats++;
         }
          // only heavy one was go.
         else {
             ptr2--;
             number_of_boats++;
         }
      }
      return number_of_boats;
    }
};