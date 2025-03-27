class Solution {
    fun solution(k: Int, tangerine: IntArray): Int {
        val sizeCount = mutableMapOf<Int, Int>()
        for (size in tangerine) {
            sizeCount[size] = sizeCount.getOrDefault(size, 0) + 1
        }
        val counts = sizeCount.values.sortedDescending()

        var remain = k
        var answer = 0
        
        for (count in counts) {
            if (remain <= 0) break
            remain -= count
            answer++
        }
        return answer
    }
}