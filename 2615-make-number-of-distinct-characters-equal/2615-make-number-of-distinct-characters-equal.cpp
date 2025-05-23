class Solution {
public:
    bool isItPossible(string word1, string word2) {
        unordered_map<char, int> freq1, freq2;

        for (char c : word1) freq1[c]++;
        for (char c : word2) freq2[c]++;

        for (auto &p1 : freq1) {
            for (auto &p2 : freq2) {
                char c1 = p1.first;
                char c2 = p2.first;

                auto temp1 = freq1;
                auto temp2 = freq2;

                temp1[c1]--;
                temp2[c2]--;

                if (temp1[c1] == 0) temp1.erase(c1);
                if (temp2[c2] == 0) temp2.erase(c2);

                temp1[c2]++;
                temp2[c1]++;

                int distinct1 = temp1.size();
                int distinct2 = temp2.size();

                if (distinct1 == distinct2) return true;
            }
        }

        return false;
    }
};
