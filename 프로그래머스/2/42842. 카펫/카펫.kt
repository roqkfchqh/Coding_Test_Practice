class Solution {
    fun solution(brown: Int, yellow: Int): IntArray {
    val total = brown + yellow

    for (width in 3..total) {
        if (total % width == 0) {
            val height = total / width

            if (width < height) continue

            if ((width - 2) * (height - 2) == yellow) {
                return intArrayOf(width, height)
            }
        }
    }
    return intArrayOf()
    }
}