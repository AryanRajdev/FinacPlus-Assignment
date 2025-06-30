// 1. Write a special cipher that is a combination of Caesar’s cipher followed by a simple
// RLE. The function should receive a string and the rotation number as parameters.
// Input: special Cipher(“AABCCC”, 3) Output: D2EF3

#include <bits/stdc++.h>
using namespace std;

string specialCipher(string s, int shift)
{
    string caesar = "";

    // Caesar cipher

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        int encrypt = ((ch - 'A') + shift) % 26;
        caesar += (encrypt + 'A');
    }

    // Run-Length Encoding

    string result = "";
    int n = caesar.size();
    int i = 0;

    while (i < n)
    {
        char current = caesar[i];
        int count = 1;
        int j = i + 1;

        while (j < n && caesar[j] == current)
        {
            count++;
            j++;
        }

        result += current;
        if (count > 1)
        {
            result += to_string(count);
        }

        i = j;
    }

    return result;
}

int main()
{
    string input = "AABCCC";
    int rotation = 3;

    cout << specialCipher(input, rotation) << endl;
    return 0;
}


// Time Complexity - O(n)
// Space Complexity - O(n)