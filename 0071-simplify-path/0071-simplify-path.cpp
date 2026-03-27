class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        string curr = "";

        for (int i = 0; i < path.size(); i++) {
            if (path[i] == '/') {
                if (!curr.empty()) {
                    if (curr == "..") {
                        if (!st.empty()) st.pop_back();
                    } else if (curr != ".") {
                        st.push_back(curr);
                    }
                    curr = "";
                }
            } else {
                curr += path[i];
            }
        }

        // Handle last part
        if (!curr.empty()) {
            if (curr == "..") {
                if (!st.empty()) st.pop_back();
            } else if (curr != ".") {
                st.push_back(curr);
            }
        }

        // Build result
        string result = "/";
        for (int i = 0; i < st.size(); i++) {
            result += st[i];
            if (i != st.size() - 1) result += "/";
        }

        return result;
    }
};