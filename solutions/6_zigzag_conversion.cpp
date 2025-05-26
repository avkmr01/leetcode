class Solution {
public:
    string convert(string s, int numRows) {
        // Input: s = "PAYPALISHIRING", numRows = 3
        // Output: "PAHNAPLSIIGYIR"
        // 1st row: Gap of 3 alphabet, starting from 1st alphabet
        // 2nd row: Gap of 1 alphabet, starting from 2nd alphabet 
        // 3rd row: Gap of 3 alphabet, starting from 3rd alphabet

        // Input: s = "PAYPALISHIRING", numRows = 4
        // Output: "PINALSIGYAHRPI"
        // 1st row: Gap of 5 alphabet, starting from 1st alphabet
        // 2nd row: Gap of 3 alphabet then 1 alphabet, starting from 2nd alphabet 
        // 3rd row: Gap of 1 alphabet then 3 alphabet, starting from 3rd alphabet
        // 4th row: Gap of 5 alphabet, starting from 4th alphabet

        // Input: s = "PAYPALISHIRING", numRows = 5
        // Output: "PHASIYIRPLIGAN"
        // P       H
        // A     S I
        // Y   I   R
        // P L     I G
        // A       N
        // 1st row: Gap of 7 alphabet, starting from 1st alphabet
        // 2nd row: Gap of 5 alphabet then 1 alphabet, starting from 2nd alphabet 
        // 3rd row: Gap of 3, starting from 3rd alphabet
        // 4th row: Gap of 1 alphabet then 5 alphabet, starting from 4th alphabet
        // 5th row: Gap of 7 alphabet, starting from 5th alphabet

        // let n be the length of row
        // 1st row: (n-1)*2 - 1 equivalent to (n-(p))*2-1
        // (p)th row: (n-(p))*2-1 -> ((p)-1)*2-1 -> (n-(p))*2-1 ...
        // last row: (n-1)*2 - 1 equivalent to ((p)-1)*2-1

        
        string output = ""; // Final result string
        int str_length = s.length(); // Total length of the input string
        int preset = 0; // Used to calculate the jump steps between characters

        // Only apply ZigZag logic if more than 1 row is specified
        if (numRows > 1) {
            // Loop through each row of the zigzag pattern (1-based index)
            for (int i = 1; i <= numRows; i++) {
                int count = 0; // Counter to alternate step sizes for middle rows
                int j = i;     // Start index for this row (1-based for string positions)

                // For the first and last rows, the jump is always the same
                if (i == 1 || i == numRows) {
                    preset = (numRows - 1) * 2; // Fixed step size for outer rows
                }

                // Traverse through the string to collect characters for this row
                while (j <= str_length) {
                    // For middle rows, alternate step size between downward and upward jumps
                    if (i != 1 && i != numRows) {
                        if (count % 2 == 0) {
                            // Step to next downward character (diagonal going down)
                            preset = (numRows - i) * 2;
                        } else {
                            // Step to next upward character (diagonal going up)
                            preset = (i - 1) * 2;
                        }
                    }

                    // Append the character at current position to output
                    output.append(1, s[j - 1]); // j is 1-based; convert to 0-based

                    cout << j << endl; // Debug: print the current index used

                    j += preset; // Move to the next character in this row
                    count += 1;  // Increment the count to alternate the direction
                }
            }
        } else {
            // If only 1 row, the zigzag is just the original string
            output = s;
        }

        return output; // Return the final zigzag-converted string


    }
};