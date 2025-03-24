class Solution {
    fun solution(s: String): IntArray {
        var currentString = s
        var transformationCount = 0
        var removedZeros = 0
        
        while (currentString != "1") {
            val zerosInCurrentString = currentString.count { it == '0' }
            removedZeros += zerosInCurrentString
            
            val lengthAfterRemoval = currentString.length - zerosInCurrentString
            currentString = Integer.toBinaryString(lengthAfterRemoval)
            
            transformationCount++
        }
        return intArrayOf(transformationCount, removedZeros)
    }
}