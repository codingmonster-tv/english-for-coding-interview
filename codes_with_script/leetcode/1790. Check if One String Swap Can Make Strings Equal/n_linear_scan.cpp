class Solution {
public:
// first I will set up three main rules for it 
// 1. an empty string can't be metatheses
// 2. two strings with different sizes can not be metatheses
// 3. the number of indices which characters are unmatched at must be 2 or 0

// first, I will check the edge cases using condition 1 and 2 
// i will Have loop I, 
// scanning each indices linearly and comparing two corresponded characters
// during the loop, i will store unmatched indicies into a list 
// and after the end of loop I, i will check if the list has exactly two indicies
// if not, the function will return false because it doesn't satisfy condition 3
// if yes, i will compare two characters of two strings by crossing over two indcies 
// and if the two crossed-pairs of characters are matched, return true or return false 

    bool areAlmostEqual(string a, string b) {
        if(a.length() == 0 or b.length() == 0) return false; // check if a string is empty
        if(a.length() != b.length()) return false; // and check if string have different lengths

        vector<int> unmatched; // vector for storing unmatched indicies // SC : O(1) 
        for(int i = 0; i < a.length(); i+= 1){ // i will have loop i starting from zero to a dot length minus one 
            if(a[i] != b[i]){   // check if two characters a at i and b and i are different 
                unmatched.push_back(i); // if different, push this index into the vector unmatched 
            }
            if(unmatched.size() > 2) return false;  // if unmatched indicies is greater than 2, it doesn't satisfy condition number 3, so skip 
        }
        if(unmatched.size() == 1) return false; // if unmatched indicies is just one it also doesn't satisfy condition 3. so skip
        if(unmatched.size() == 0) return true;
        // and just check two pairs are matched by crossing the indicies and return the result 
        return a[unmatched[0]] == b[unmatched[1]] && a[unmatched[1]] == b[unmatched[0]];
    }
};