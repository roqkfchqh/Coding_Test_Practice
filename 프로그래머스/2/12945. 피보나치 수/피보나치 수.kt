class Solution {
    fun solution(n: Int): Int {
        var a = 0
        var b = 1

        for (i in 2..n) {
            val next = (a + b) % 1234567
            a = b
            b = next
        }
        
        return b
    }
}