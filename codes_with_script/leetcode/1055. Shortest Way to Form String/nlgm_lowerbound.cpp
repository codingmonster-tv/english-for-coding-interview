#include<string>
#include<vector>
#include<algorithm>
#include<unordered_map>

using namespace std; 


class Solution {
public:
    int shortestWay(string source, string target) {   
        // I have a dictionary having character as a key and vector as a value 
        // is a dictionary of vectors having indicies for each characters of source 
        unordered_map<char, vector<int> > indicies; 

        // let me fill out indicies dictionary 
        for(int i = 0 ; i < source.length() ; i += 1){
            indicies[source[i]].push_back(i);
        }

        // the pieces is the number of repeat of source, and to be returned 
        int pieces = 0;

        // the index of last used characters in b 
        int j = source.size(); 

        // i have a loop I, starting from zero to the length of target minus 1
        // we will iterate all the characters inside target string 
        for(int i = 0 ; i < target.length() ; i += 1){
            // the target at i is the current character to find 
            // so get the indicies vector for it 
            vector<int> &v = indicies[target[i]];

            // if the vector is empty, it means that the character doesn't exist in source string 
            if(v.size() == 0) return -1; // so return -1, indicating no solution 

            // by using lower_bound, get the 'least' index of the character in source string 
            auto nj = lower_bound(v.begin(), v.end(), j);
            if(nj == v.end()) { // if every indcies are already used once, let's go with new copy 
                nj = lower_bound(v.begin(), v.end(), 0);    // so find 'least' index again from v 
                pieces += 1;    // and increase the number of used copies 
            }
            // so the character, source at j, was used above. so i should not be used again in the same copy
            // so let j be the last index plus 1, then next lower_bound doesn't used last index 
            j = *nj + 1; 
        }
        return pieces;
    }
};