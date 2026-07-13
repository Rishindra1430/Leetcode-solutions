class Solution {
public:
    string decodeString(string s) {
        stack<int> numbers;
        stack<string> words;

        string curr = "";
        int num = 0;

        for (int i = 0; i < s.size(); i++) {

            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            else if (s[i] == '[') {
                numbers.push(num);
                words.push(curr);

                num = 0;
                curr = "";
            }

            else if (isalpha(s[i])) {
                curr += s[i];
            }

            else if (s[i] == ']') {

                int repeat = numbers.top();
                numbers.pop();

                string temp = words.top();
                words.pop();

                for (int j = 0; j < repeat; j++) {
                    temp += curr;
                }

                curr = temp;
            }
        }

        return curr;
    }
};