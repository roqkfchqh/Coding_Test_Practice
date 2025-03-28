class Solution {
    fun solution(n: Int): Long {
        if (n == 1) return 1
        if (n == 2) return 2

        val a = LongArray(n + 1)
        a[1] = 1
        a[2] = 2

        for (i in 3..n) {
            a[i] = (a[i - 1] + a[i - 2]) % 1234567
        }

        return a[n]
    }
}