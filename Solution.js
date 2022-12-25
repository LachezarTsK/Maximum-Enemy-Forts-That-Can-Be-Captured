
/**
 * @param {number[]} forts
 * @return {number}
 */
var captureForts = function (forts) {

    let firstEndPoint = 0;
    let secondEndPoint = 0;
    let maxCapturedEnemyForts = 0;

    while (secondEndPoint < forts.length) {
        if (forts[secondEndPoint] !== 0) {
            if (forts[secondEndPoint] === -forts[firstEndPoint]) {
                maxCapturedEnemyForts = Math.max(maxCapturedEnemyForts, secondEndPoint - firstEndPoint - 1);
            }
            firstEndPoint = secondEndPoint;
        }
        ++secondEndPoint;
    }

    return maxCapturedEnemyForts;
};
