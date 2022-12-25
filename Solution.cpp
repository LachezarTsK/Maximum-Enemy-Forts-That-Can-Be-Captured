
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
    
public:
    //C++20: int captureForts(span<const int> forts) const ...
    int captureForts(const vector<int>& forts) const {

        int firstEndPoint = 0;
        int secondEndPoint = 0;
        int maxCapturedEnemyForts = 0;

        while (secondEndPoint < forts.size()) {
            if (forts[secondEndPoint] != 0) {
                if (forts[secondEndPoint] == -forts[firstEndPoint]) {
                    maxCapturedEnemyForts = max(maxCapturedEnemyForts, secondEndPoint - firstEndPoint - 1);
                }
                firstEndPoint = secondEndPoint;
            }
            ++secondEndPoint;
        }

        return maxCapturedEnemyForts;
    }
};
