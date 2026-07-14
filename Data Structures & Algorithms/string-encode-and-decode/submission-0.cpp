class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0) return "";
        vector<int> sizes;
        string ans = "";
        for(int i=0; i<strs.size(); i++){
            sizes.push_back(strs[i].size());
        }
        ans += to_string(sizes[0]);
        for(int i=1; i<sizes.size(); i++){
            ans += ',';
            ans += to_string(sizes[i]);
        }
        ans += '#';
        for(int i=0; i<strs.size(); i++){
            ans += strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        if(s.size() == 0) return {};
        stringstream ss(s);
        string beforehash, afterhash;
        getline(ss, beforehash, '#');
        getline(ss, afterhash);
        // Get all lengths
        vector<int> lengths;
        stringstream lenStream(beforehash);
        string len;

        while (getline(lenStream, len, ',')) {
            lengths.push_back(stoi(len));
        }

        // Extract the strings
        vector<string> result;
        int index = 0;

        for (int length : lengths) {
            result.push_back(afterhash.substr(index, length));
            index += length;
        }

        return result;

    }
};
