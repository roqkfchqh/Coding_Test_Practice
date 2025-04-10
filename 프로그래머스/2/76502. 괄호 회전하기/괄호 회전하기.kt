class Solution {
    fun solution(s: String): Int {
        var answer = 0
        
        for (i in 0 until s.length) {
            val rotate = s.substring(i) + s.substring(0, i)
            
            if (isValid(rotate)) {
                answer++
            }
        }
        
        return answer
    }
    
    private fun isValid(s: String): Boolean {
        val stack = ArrayDeque<Char>()
        
        for (char in s) {
            when (char) {
                '(', '[', '{' -> stack.addLast(char)
                ')' -> {
                    if (stack.isEmpty() || stack.removeLast() != '(') return false
                }
                ']' -> {
                    if (stack.isEmpty() || stack.removeLast() != '[') return false
                }
                '}' -> {
                    if (stack.isEmpty() || stack.removeLast() != '{') return false
                }
            }
        }
        return stack.isEmpty()
    }
}