class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int size = nums.size();
        std::map<int, int> myDict; // Dictionary to store value -> index mapping

        for (int i = 0; i < size; i++)
        {
            int diff = target - nums[i];

            // Check if the complement (diff) exists in the dictionary
            auto it = myDict.find(diff);
            if (it != myDict.end())
            {                           // If found, return indices
                return {it->second, i}; // The stored index and current index
            }

            // Store the current number with its index
            myDict[nums[i]] = i;
        }

        return {}; // Return empty vector if no solution is found
    }
};