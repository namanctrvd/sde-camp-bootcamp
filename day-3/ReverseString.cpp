// Leetcode 344. Reverse String

class Solution {
public:
    void reverseString(vector<char>& s) {   
        int i,n;
        char temp;
        n = s.size();
        for(i=0;i<n/2;i++){
            temp = s[i];
            s[i] = s[n-i-1];
            s[n-1-i] = temp;
            
        }
        
    }
}

/*
class Solution {
public:
    void reverseString(vector<char>& s) { 
        int i,n = s.size()-1;
        for(i=0;i<n;i++){
            swap(s[i], s[n]);
            n--;
        }
            
    }
};
*/