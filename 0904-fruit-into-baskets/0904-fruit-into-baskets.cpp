class Solution {
public:
    int totalFruit(vector<int>& fruits) {
         unordered_map<int, int> fruitCount; 
    int left = 0; 
    int maxFruits = 0; 

    for (int right = 0; right < fruits.size(); right++) {
        fruitCount[fruits[right]]++; 

       
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
