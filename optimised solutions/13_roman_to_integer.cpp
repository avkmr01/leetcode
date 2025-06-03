class Solution {
public:
    int romanToInt(string s) {
        // Step 1: Define a map to store Roman numeral symbols and their corresponding integer values
        map<char, int> romanMap = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        // Initialize multiplier for place values (not typically needed in standard logic)
        int tensCount = 1;
        // Direction indicates whether to add or subtract the current value
        int direction = 1;
        // This will hold the final result
        int sum = 0;
        // Length of the input string
        int stringLength = s.length();
        int temp;

        // Step 2: Iterate through the string from right to left (excluding the first character)
        for (int i = stringLength - 1; i > 0; i--) {
            // Get the integer value of the current Roman numeral character
            temp = romanMap[s[i]];

            // Add or subtract the value (based on direction and tensCount)
            sum = sum + direction * temp * tensCount;

            // Check if the previous numeral should be subtracted (based on Roman numeral rules)
            // For example: IV -> 1 (I) * 5 = 5 (V), so I should be subtracted
            if (romanMap[s[i - 1]] * 5 == temp || romanMap[s[i - 1]] * 10 == temp) {
                direction = -1; // Next value should be subtracted
            } else {
                direction = 1; // Next value should be added

                // Optional and unconventional logic: Update tensCount if the previous numeral is smaller
                if (romanMap[s[i - 1]] < temp) {
                    tensCount = tensCount * 10;
                }
            }
        }

        // Step 3: Process the first character of the string
        // Apply final direction and tensCount to the first character's value
        sum = sum + direction * romanMap[s[0]] * tensCount;

        // Step 4: Return the computed integer value
        return sum;
    }
};
