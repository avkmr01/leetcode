class Solution {

    // Helper function to convert a single digit and its positional place (units, tens, hundreds, thousands) into Roman numerals.
    string romanize(int digit, int tensPlace) {
        // Map for basic Roman numeral values.
        map<int, char> romanNumber = {
            {1, 'I'},
            {5, 'V'},
            {10, 'X'},
            {50, 'L'},
            {100, 'C'},
            {500, 'D'},
            {1000, 'M'}
        };

        int times = pow(10, tensPlace); // Get the place value (1 for units, 10 for tens, etc.)
        cout << digit * times << " - ";

        // Convert based on Roman numeral rules
        if (digit < 4) {
            // e.g., 1-3 → I, II, III
            return string(digit, romanNumber[times]);
        } else if (digit == 4) {
            // e.g., 4 → IV
            return string(1, romanNumber[times]) + string(1, romanNumber[5 * times]);
        } else if (digit > 4 && digit < 9) {
            // e.g., 5-8 → V, VI, VII, VIII
            return string(1, romanNumber[5 * times]) + string(digit - 5, romanNumber[times]);
        } else {
            // digit == 9 → IX (or similar patterns)
            return string(1, romanNumber[times]) + string(1, romanNumber[10 * times]);
        }
    }

public:
    string intToRoman(int num) {
        // Convert the integer to Roman numeral by handling each digit place (units, tens, hundreds, thousands)
        
        int countTen = 0; // Keeps track of the digit's place (0 for units, 1 for tens, etc.)
        int digit = 0; // Current digit being processed
        string romanConversion = ""; // Resultant Roman numeral string

        // Loop through each digit in the number from right to left
        while (num > 0) {
            digit = num % 10; // Get the last digit
            romanConversion = romanize(digit, countTen) + romanConversion; // Convert and prepend

            num = num / 10; // Move to the next higher digit
            countTen++; // Increase place value
        }

        return romanConversion; // Return final Roman numeral
    }
};
