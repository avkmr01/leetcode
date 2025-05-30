class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int area = 0;          // Stores the maximum area found
        int temp_area = 0;     // Stores the area for the current pair of lines

        int left = 0;          // Pointer starting from the left end
        int right = n - 1;     // Pointer starting from the right end

        int width = 0;         // Distance between the two lines

        // Continue until the two pointers meet
        while (left < right) {
            width = right - left; // Calculate current width

            // Calculate the current area using the shorter line's height
            temp_area = height[left] > height[right] ?
                        height[right] * width :
                        height[left] * width;

            // Update the maximum area if the current area is greater
            if (area < temp_area) {
                area = temp_area;
            }

            // Move the pointer pointing to the shorter line inward
            // This is a greedy move aiming to possibly find a taller line
            if (height[left] > height[right]) {
                right--;
            } else {
                left++;
            }
        }

        // The below commented-out nested loop is a brute-force approach
        // It checks all pairs and is O(n^2), hence inefficient for large inputs
        /*
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int width = j - i;
                int temp_height = min(height[i], height[j]);
                int new_area = temp_height * width;
                if (new_area > area) {
                    area = new_area;
                }
            }
        }
        */

        return area; // Return the maximum area found
    }
};
