class Solution {
    fun solution(elements: IntArray): Int {
        val n = elements.size
        val extend = IntArray(2 * n) { i -> elements[i % n] }
        val sums = mutableSetOf<Int>()

        for (len in 1..n) {
            for (start in 0 until n) {
                var sum = 0
                for (i in start until start + len) {
                    sum += extend[i]
                }
                sums.add(sum)
            }
        }
        return sums.size
    }
}