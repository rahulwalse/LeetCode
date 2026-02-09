/*
 * @lc app=leetcode id=58 lang=c
 *
 * [58] Length of Last Word
 */

// @lc code=start
int lengthOfLastWord(char* s) {
    int word_started = 0;
    int last_word_len = 0;
    int length = strlen(s);

    for(int i = length - 1; i >= 0; i--)
    {
        if(!word_started && s[i] == ' ')
            continue;
        else if(s[i] == ' ')
            break;
        else
        {
            word_started = 1;
            last_word_len++;
        }
    }
    return last_word_len;
}
// @lc code=end

