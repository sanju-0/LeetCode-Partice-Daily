class Solution {
public:
    bool isLongPressedName(string name, string typed) {
      int one{0} , two{0};
      while(one<name.length()){
          if(name[one] == typed[two]) one++ , two++;
          else if(name[one] != typed[two] && two>0 && typed[two] == typed[two-1]) two++;
          else return false;
      }
        while(two<typed.length()){
            if(typed[two++] != name[name.length()-1]) return false;
        }
        return true;
    }
};