class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        //Traverse from the end, turn 9s into 0s, and increment the first non-9
        //iterate in reverse order
        for(int i = digits.size() - 1; i >= 0; i--) {
            if(digits[i] < 9) { //agar 9 se chota h value at i toh add normally
                digits[i]++;
                return digits;  //increment krte hi return kr do
            }
            digits[i] = 0;      //if bigger than 9, insert 1 and then carry on
        }
        //for edge case like {9,9,9}
        //insert 1 at the beginning
        digits.insert(digits.begin(), 1);   
        return digits;
    }
};
