class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string word = "";
        string word4 = "";
        for(int i=0; i<=word1.size()-1; i++)
        {
            word = word + word1[i];
        }
        for(int i=0; i<=word2.size()-1; i++)
        {
            word4 = word4 + word2[i];
        }
        if (word==word4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};