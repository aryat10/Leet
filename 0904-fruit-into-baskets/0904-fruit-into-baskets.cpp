class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         unordered_map<int, int> fruitCount; // Map to store the count of each fruit type
    int left = 0; // Left boundary of the sliding window
    int maxFruits = 0; // Variable to track the maximum number of fruits collected

    for (int right = 0; right < fruits.size(); right++) {
        fruitCount[fruits[right]]++; // Add the current fruit to the map

        // If there are more than two types of fruits in the window, shrink it
        while (fruitCount.size() > 2) {
            fruitCount[fruits[left]]--; // Reduce the count of the leftmost fruit
            if (fruitCount[fruits[left]] == 0) {
                fruitCount.erase(fruits[left]); // Remove it from the map if count becomes 0
            }
            left++; // Move the left pointer
        }

        // Update the maximum fruits collected so far
        maxFruits = max(maxFruits, right - left + 1);
    }

    return maxFruits;
    }
};