#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    string s, line;
    while (getline(cin, line)) {
        s += line;
        s += '\n';
    }

    int n = s.length();
    int i = 0;

    set<string> keywords = {
        "int", "if", "else", "while", "for", "return"
    };

    set<char> op = {'+', '-', '*', '/', '=', '<', '>'};
    set<char> special = {';', ',', '(', ')', '{', '}'};

    vector<string> key_tokens, identifiers;
    vector<int> numbers;
    vector<char> operators, symbols;

    
    while (i < n) {
        char ch = s[i];

        
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            i++;
            continue;
        }

        
        if (ch == '/' && i + 1 < n) {

            
            if (s[i + 1] == '/') {
                i += 2;
                while (i < n && s[i] != '\n') i++;
                continue;
            }

            
            if (s[i + 1] == '*') {
                i += 2;
                while (i + 1 < n && !(s[i] == '*' && s[i + 1] == '/')) i++;
                i += 2;
                continue;
            }
        }

        
        if (isalpha(ch)) {
            string temp;
            while (i < n && isalnum(s[i])) {
                temp += s[i];
                i++;
            }

            if (keywords.count(temp))
                key_tokens.push_back(temp);
            else
                identifiers.push_back(temp);

            continue;
        }

        
        if (isdigit(ch)) {
            string temp;
            while (i < n && isdigit(s[i])) {
                temp += s[i];
                i++;
            }
            numbers.push_back(stoi(temp));
            continue;
        }

        
        if (op.count(ch)) {
            operators.push_back(ch);
            i++;
            continue;
        }

        
        if (special.count(ch)) {
            symbols.push_back(ch);
            i++;
            continue;
        }

        
        i++;
    }

    cout << "Keywords:\n";
    for (auto &k : key_tokens) cout << k << " ";
    cout << "\n\nIdentifiers:\n";
    for (auto &v : identifiers) cout << v << " ";
    cout << "\n\nNumbers:\n";
    for (auto &x : numbers) cout << x << " ";
    cout << "\n\nOperators:\n";
    for (auto &o : operators) cout << o << " ";
    cout << "\n\nSymbols:\n";
    for (auto &s : symbols) cout << s << " ";

    return 0;
}
