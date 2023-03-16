/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        int s =1;
        int e = z;
        int mid = s+(e-s)/2;
        vector<vector<int>> ans;
        while(s<=e)
        {
            if(customfunction.f(mid,z-mid)==z )
            {
                vector<int> temp;
                vector<int> temp1;
                temp.push_back(mid);
                temp.push_back(z-mid);
                temp1.push_back(z-mid);
                temp1.push_back(mid);
                ans.push_back(temp1);
                ans.push_back(temp);
                
                e = mid-1;
            }
            else{
                s= mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};
