class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        std::unordered_map<char, int> freq;
        for (char c : words[0]) freq[c]++;

        for (size_t i = 1; i < words.size(); ++i) {
            std::unordered_map<char, int> map;
            for (char c : words[i]) map[c]++;
            
            for (auto it = freq.begin(); it != freq.end();) {
                if (map.find(it->first) == map.end())
                    it = freq.erase(it);
                else {
                    it->second = std::min(it->second, map[it->first]);
                    ++it;
                }
            }
        }
        std::vector<std::string> res;
        for (const auto& kvp : freq)
            for (int j = 0; j < kvp.second; ++j)
                res.push_back(std::string(1, kvp.first));
        return res;
    }
};