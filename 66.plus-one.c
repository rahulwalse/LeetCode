/*
 * @lc app=leetcode id=66 lang=c
 *
 * [66] Plus One
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 0;
    *returnSize = digitsSize;
    for(int i = digitsSize - 1; i >= 0; i--)
    {
        if(digits[i] != 9)
        {
            carry = 0;
            digits[i] = digits[i] + 1;
        }
        else
        {
            carry = 1;
            digits[i] = 0;
        }

        if(i != 0 && !carry) { break; }

        // Check if current digit is MSB and carry is generated
        if(i == 0 && carry)
        {
            int new_size = digitsSize + 1;
            int* new_array = malloc(new_size * sizeof(int));
            for(int i = 1; i < new_size; i++)
            {
                new_array[i] = 0;
            }
            new_array[0] = 1;
            *returnSize = new_size;

            // free(digits);
            digits = new_array;
        }
    }
    return digits;
}
// @lc code=end

