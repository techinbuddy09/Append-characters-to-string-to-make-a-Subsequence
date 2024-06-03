//two pointer approach
class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0; // pointer for string s
        int j = 0; // pointer for string t

        //  firstly we Traversed string s
        while (i < s.size()) {
            // Incrementing  i until characters at s[i] and t[j] are=
            while (i < s.size() && s[i] != t[j]) {
                i++;
            }
            // If we have reached the end of s, return the remaining length of t
            if (i == s.size()) {
                return t.size() - j;
            }
            // Move both pointers to the next position
            i++;
            j++;
        }
        
        // If we have finished traversing s, return the remaining length of t
        return t.size()-j ;
    }
};
// for calculating length we cant take the length  as 0 because the start count from 1
