class Solution {
    fun solution(s: String): String =
        s.split(" ").mapNotNull { it.toIntOrNull() }
        .let { "${it.minOrNull()} ${it.maxOrNull()}" }
}