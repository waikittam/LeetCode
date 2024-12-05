class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        Roman_to_Int = {
            'I' : 1,
            'V' : 5,
            'X' : 10,
            'L' : 50,
            'C' : 100,
            'D' : 500,
            'M' : 1000
        }

        total = 0
        prev_value = 0

        for char in s:
            current_value = Roman_to_Int[char]

            if(current_value > prev_value):
                total = total + current_value - 2 * prev_value
            else:
                total = total + current_value

            prev_value = current_value
        
        return total
                
