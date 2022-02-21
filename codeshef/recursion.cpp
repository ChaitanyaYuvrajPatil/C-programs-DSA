#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum1(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = sum1(n - 1);
    return n + prevSum;
}

int nthfibo(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return nthfibo(n - 1) + nthfibo(n - 2);
}

bool sorted(int arr[], int n)
{
    if (n == 1)
    {
        return true;
    }
    bool restArray = sorted(arr + 1, n - 1);
    return (arr[0] < arr[1] && restArray);
}

void dec(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << endl;
    dec(n - 1);
}

void inc(int n)
{
    if (n == 0)
    {
        return;
    }
    inc(n - 1);
    cout << n << endl;
}

void reverse1(string s)
{
    if (s.length() == 0)
        return;
    string ros = s.substr(1);
    reverse1(ros);
    cout << s[0];
}

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << 3.14;
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

void towerofHanoi(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        return;
    }
    towerofHanoi(n - 1, src, help, dest);
    cout << "Move from" << src << " to " << dest << endl;
    towerofHanoi(n - 1, help, dest, src);
}

string removeDup(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = removeDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    return ch + ans;
}

string moveallx(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if (ch == 'x')
    {
        return ans + ch;
    }
    return ch + ans;
}

vector <string> sub;
void subseq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        sub.push_back(ans);
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros, ans);
    subseq(ros, ans + ch);
}

void subseq2(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq2(ros, ans);
    subseq2(ros, ans + ch);
    subseq2(ros, ans + to_string(code));
}

string keypadArr[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypad(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch - '0'];
    string ros = s.substr(1);
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
}

void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1);
        permutation(ros, ans + ch);
    }
}

int countPathMaze(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
    {
        return 1;
    }
    if (i >= n || j >= n)
    {
        return 0;
    }
    return countPathMaze(n, i + 1, j) + countPathMaze(n, i, j + 1);
}

int tilingways(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return tilingways(n - 1) + tilingways(n - 2);
}

int friendPairing(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return n;
    }

    return friendPairing(n - 1) + friendPairing(n - 2) * (n - 1);
}



int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    //cout << sum1(4);
    //cout << nthfibo(5);
    //cout << sorted(arr,5);
    //inc(5);
    //string r = "ram";
    //reverse1(r);
    //replacePi("pipppiiiiipi");
    //towerofHanoi(3,'A','C','B');
    //cout << removeDup("aaaabbbbbddddooooortoooo");
    //cout<<moveallx("xtmnxxrxpx");
    subseq("ABC", "");
    cout << sub[3];
    //keypad("23","");
    // permutation("ABC","");
    //cout << countPathMaze(3, 0, 0) << endl;
    //cout<<tilingways(4);
    //cout<<friendPairing(4);
}