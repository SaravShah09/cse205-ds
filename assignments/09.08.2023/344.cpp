# include <iostream>
int std::swap
class Solution {
public:
    void reverseString(char s) {
        int i=0;
        rev(s,i);
      }
   void rev(char s, int i)
   {
      if (i>=(s.size()/2))
      {
         return;
      }
      swap(s[i], s[s.size() - i- 1])
      rev(s, i+1);
   }
};