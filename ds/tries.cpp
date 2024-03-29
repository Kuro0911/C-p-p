// Tries are Prefix trees where all nodes can have atleast 26 children and we can find prefixes
// used for auto correct / spell check / word suggestions

/*
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tb ' '
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)x.size())
#define MOD (int)(1e9 + 7)
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef pair<int, pii> pip;
typedef pair<pii, pii> ppp;

class TrieNode
{
public:
    map<char, TrieNode *> children;
    bool isEnd;
    TrieNode()
    {
        isEnd = false;
    }
};
class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode();
    }
    void insert(string word)
    {
        TrieNode *temp = root;
        for (auto &x : word)
        {
            if (temp->children.find(x) == temp->children.end())
            {
                temp->children[x] = new TrieNode();
            }
            temp = temp->children[x];
        }
        temp->isEnd = true;
    }

    bool search(string word)
    {
        TrieNode *temp = root;
        for (auto x : word)
        {
            if (temp->children.find(x) == temp->children.end())
            {
                return false;
            }
            temp = temp->children[x];
        }
        return temp->isEnd;
    }

    bool startsWith(string prefix)
    {
        TrieNode *temp = root;
        for (auto x : prefix)
        {
            if (temp->children.find(x) == temp->children.end())
            {
                return false;
            }
            temp = temp->children[x];
        }
        return true;
    }
};
void solve()
{
    Trie trie;
    trie.insert("hello");
    trie.insert("help");
    trie.insert("hola");

    if (trie.search("hola"))
    {
        cout << "found\n";
    }
    else
    {
        cout << "NF\n";
    }
    if (trie.startsWith("hela"))
    {
        cout << "found pre\n";
    }
    else
    {
        cout << "NF pre\n";
    }
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
#ifndef ONLINE_JUDGE
    cerr << "Time :" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
#endif
    return 0;
}
*/

// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define tb ' '
// #define all(a) (a).begin(), (a).end()
// #define sz(x) ((int)x.size())
// #define MOD (int)(1e9 + 7)
// typedef pair<int, int> pii;
// typedef pair<pii, int> ppi;
// typedef pair<int, pii> pip;
// typedef pair<pii, pii> ppp;

// class node
// {
// public:
//     map<char, node *> chars;
//     bool isEnd;
//     node()
//     {
//         isEnd = false;
//     }
// };
// class WordDictionary
// {
// public:
//     node *root;
//     WordDictionary()
//     {
//         root = new node();
//     }

//     void addWord(string word)
//     {
//         node *temp = root;
//         for (auto x : word)
//         {
//             if (!temp->chars[x])
//             {
//                 temp->chars[x] = new node();
//             }
//             temp = temp->chars[x];
//         }
//         temp->isEnd = true;
//     }
// bool dfs(node *curr, int st, string word)
// {
//     node *temp = curr;
//     for (int i = st; i < word.size(); i++)
//     {
//         if (word[i] == '.')
//         {
//             for (auto y : temp->chars)
//             {
//                 if (dfs(y.second, i + 1, word))
//                 {
//                     return true;
//                 }
//             }
//             return false;
//         }
//         else
//         {
//             if (!temp->chars[word[i]])
//             {
//                 return false;
//             }
//             temp = temp->chars[word[i]];
//         }
//     }
//     return temp->isEnd;
// }
//     int dfs(node *root, string s)
//     {
//         node *temp = root;
//         int ans = 0;
//         // cout << s << endl;
//         for (int i = 0; i < s.size(); i++)
//         {
//             if (temp->chars.find(s[i]) != temp->chars.end())
//             {
//                 if (s.size() == 1)
//                 {
//                     ans += temp->chars[s[i]]->chars.size();
//                     if (temp->chars[s[i]]->isEnd)
//                     {
//                         ans++;
//                     }
//                     for (auto y : temp->chars[s[i]]->chars)
//                     {
//                         cout << y.first << " ";
//                     }
//                     cout << endl;
//                 }
//                 for (auto y : temp->chars)
//                 {
//                     ans += dfs(y.second, s.substr(1));
//                 }
//             }
//         }
//         return ans;
//     }
//     // bool search(string word)
//     // {
//     //     node *temp = root;
//     //     return dfs(temp, 0, word);
//     // }
//     int helper(string s)
//     {
//         node *temp = root;
//         return dfs(temp, s);
//     }
// };

// void solve()
// {
//     WordDictionary trie;
//     vector<string> vec{"abc", "ab", "bc", "b"};
//     for (auto x : vec)
//     {
//         trie.addWord(x);
//     }
//     cout << trie.helper("abc");
// }

// signed main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t = 1;
//     // cin>>t;
//     while (t--)
//     {
//         solve();
//     }
// #ifndef ONLINE_JUDGE
//     cerr << "Time :" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
// #endif
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define tb ' '
#define all(a) (a).begin(), (a).end()
#define sz(x) ((int)x.size())
#define MOD (int)(1e9 + 7)
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;
typedef pair<int, pii> pip;
typedef pair<pii, pii> ppp;

// #####################################################

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    for (auto &x : v)
        os << x << " ";
    os << endl;
    return os;
}
template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    for (auto it : v)
        os << it << " ";
    return os;
}
template <typename T, typename S>
ostream &operator<<(ostream &os, const map<T, S> &v)
{
    for (auto it : v)
        os << it.first << " : " << it.second << endl;
    return os;
}
template <typename T, typename S>
ostream &operator<<(ostream &os, const pair<T, S> &v)
{
    os << v.first << " : " << v.second << endl;
    return os;
}

// #####################################################
class Solution
{
public:
    vector<string> findWords(vector<vector<char>> &board, vector<string> &words)
    {
        for (auto x : words)
        {
            insert(x);
        }

        node *temp = root;
        vector<string> res;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                search(board, i, j, temp, "", res);
            }
        }
        return res;
    }

private:
    node *root = new node();

    void insert(string word)
    {
        node *temp = root;
        int curr = 0;
        for (int i = 0; i < word.size(); i++)
        {
            curr = word[i] - 'a';
            if (temp->children[curr] == NULL)
            {
                temp->children[curr] = new node();
            }
            temp = temp->children[curr];
        }
        temp->isEnd = true;
    }
    void search(vector<vector<char>> &board, int i, int j, node *temp, string word, vector<string> &res)
    {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[i].size() || board[i][j] == '#')
        {
            return;
        }
        char c = board[i][j];
        temp = temp->children[c - 'a'];
        if (temp == NULL)
        {
            return;
        }
        word += c;
        if (temp->isEnd)
        {
            res.push_back(word);
            temp->isEnd = false;
        }
        board[i][j] = '#';

        search(board, i + 1, j, temp, word, res);
        search(board, i - 1, j, temp, word, res);
        search(board, i, j + 1, temp, word, res);
        search(board, i, j - 1, temp, word, res);

        board[i][j] = c;
    }
};
void solve()
{
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
// for (int i = 1; i <= t; i++)
//{
// cout << "Case #" << i << ": " ;
// solve();
//}
#ifndef ONLINE_JUDGE
    cerr << "Time :" << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms";
#endif
    return 0;
}
class node
{
public:
    node *children[26];
    bool isEnd;
    node()
    {
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isEnd = false;
    }
};
