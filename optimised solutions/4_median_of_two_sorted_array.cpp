class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        // Merge the second array into the first array
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Sort the merged array
        sort(nums1.begin(), nums1.end());

        // Calculate the size of the merged array
        int mid = nums1.size();

        // Check if the size of the array is odd
        if (mid % 2 != 0)
        {
            // If odd, return the middle element as the median
            return nums1[mid / 2];
        }
        else
        {
            // If even, return the average of the two middle elements as the median
            return (float)(nums1[(mid - 1) / 2] + nums1[(mid + 1) / 2]) / 2;
        }
    }
};