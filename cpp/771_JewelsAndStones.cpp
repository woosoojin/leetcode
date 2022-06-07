class Solution {
public:
    unordered_map<char, int> countStones;
    int numOfJewels = 0;

    int numJewelsInStones(string jewels, string stones) {
        int lengthOfJewels = jewels.length();
        int lengthOfStones = stones.length();

        for (int i = 0; i < lengthOfStones; i++) {
            countStones[stones[i]]++;
        }

        for (int i = 0; i < lengthOfJewels; i++) {
            numOfJewels += countStones[jewels[i]];
        }

        return numOfJewels;
    }
};