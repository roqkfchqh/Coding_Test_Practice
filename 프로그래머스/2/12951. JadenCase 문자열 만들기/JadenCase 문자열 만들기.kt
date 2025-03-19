class Solution {
    fun solution(s: String): String =
    s.lowercase().split(" ").joinToString(" ") { it.replaceFirstChar { ch -> ch.titlecaseChar()}}
}
