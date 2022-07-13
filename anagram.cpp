#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
   if(s.size() != t.size())
      return false;

   int freq[256] = {0}; //creating a frequency array which holds the frequency of individual characters

   for(int i = 0; i < s.size(); i++)
   {
            freq[s[i] - 'a']++;  //incrementing & decrementing the frequency of same characters
            freq[t[i] - 'a']--;
   }

   for(int i = 0; i < 256; i++)
   {
       if(freq[i] != 0)   //returns false if mismatch is found in frequency of a character in both the strings
         return false;
   }
        return true;
}

int main()
{
    string s, t;
    cin >> s >> t;

    if(isAnagram(s,t))
        cout << "Anagram";
    else
        cout << "Not an anagram";
    return 0;
}
