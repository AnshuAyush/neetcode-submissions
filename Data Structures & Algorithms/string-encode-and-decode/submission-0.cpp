class Solution {
   public:
    string encode(vector<string>& strs) {
        string res = "";  // declare an empty string

        for (string s : strs) {  // loop thru all strings in strs
            int n = s.size();    // size of current string
            res = res + to_string(n) + "#" + s;
            // convert numeric size to character so that we can append
        }

        return res;
    }

    vector<string> decode(string s) {
        vector<string> res;
        int n = s.size();
        int i = 0;  // general pointer
        while (i < n) {
            int j = i;  // to track and search #

            while (s[j] != '#') {
                j++;  // increment j until # is found
            }

            // get length, convert it into integer using 'string to integer' stoi function
            // susbtr(start, number of places)
            int len = stoi(s.substr(i, j - i));

            // extract the actual word, start just after #, for 'len' places
            string word = s.substr(j + 1, len);

            res.push_back(word);

            i = j + 1 + len;  // start from next word
        }
        return res;
    }
};