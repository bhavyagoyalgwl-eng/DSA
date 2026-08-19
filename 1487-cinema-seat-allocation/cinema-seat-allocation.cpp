class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int, vector<int>> v;
        for(auto &seat : reservedSeats) {
            v[seat[0]].push_back(seat[1]);
        }
        long long ans = 2LL * n;
        for(auto &row : v) {
            bool left = true;
            bool right = true;
            bool middle = true;

            for(int seat : row.second) {
                if(seat >= 2 && seat <= 5)
                    left = false;

                if(seat >= 4 && seat <= 7)
                    middle = false;

                if(seat >= 6 && seat <= 9)
                    right = false;
            }

            if(left && right) {
                
            }
            else if(left || middle || right) {
                ans -= 1;
            }
            else {
                ans -= 2;
            }
        }
        return ans;
    }
};