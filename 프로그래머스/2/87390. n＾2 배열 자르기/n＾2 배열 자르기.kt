class Solution {
    fun solution(n: Int, left: Long, right: Long): IntArray {
        val size = (right - left + 1).toInt()
        val answer = IntArray(size)
        
        for (i in 0 until size) {
            val j = left + i
            val row = (j / n).toInt()
            val col = (j % n).toInt()
            answer[i] = maxOf(row + 1, col + 1)
        }
        return answer
    }
}