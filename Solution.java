
public class Solution {

    public int captureForts(int[] forts) {

        int firstEndPoint = 0;
        int secondEndPoint = 0;
        int maxCapturedEnemyForts = 0;

        while (secondEndPoint < forts.length) {
            if (forts[secondEndPoint] != 0) {
                if (forts[secondEndPoint] == -forts[firstEndPoint]) {
                    maxCapturedEnemyForts = Math.max(maxCapturedEnemyForts, secondEndPoint - firstEndPoint - 1);
                }
                firstEndPoint = secondEndPoint;
            }
            ++secondEndPoint;
        }

        return maxCapturedEnemyForts;
    }
}
