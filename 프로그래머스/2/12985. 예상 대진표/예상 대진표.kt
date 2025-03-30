class Solution {
    fun solution(n: Int, a: Int, b: Int): Int {
        var round = 0
        var numA = a
        var numB = b

        while (numA != numB) {
            numA = (numA + 1) / 2
            numB = (numB + 1) / 2
            round++
        }
        
        return round
    }
}