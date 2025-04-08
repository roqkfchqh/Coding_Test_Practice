class Solution {
    fun solution(arr1: Array<IntArray>, arr2: Array<IntArray>): Array<IntArray> {
        val rows = arr1.size
        val col = arr2[0].size
        val common = arr2.size

        val answer = Array(rows) { IntArray(col) }

        for (i in 0 until rows) {
            for (j in 0 until col) {
                for (k in 0 until common) {
                    answer[i][j] += arr1[i][k] * arr2[k][j]
                }
            }
        }
        
        return answer
    }
}