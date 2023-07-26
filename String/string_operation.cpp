#include <bits/stdc++.h>
using namespace std;

// Function based on String operations.
string reverse_string(string s)
{
  string cpy_s = s;
  // Method 1 using reverse function
  reverse(s.begin(), s.end());
  return s;

  // Method 2
  int i = 0, j = cpy_s.size();
  while (i < j)
  {
    int temp = s[i];
    s[i] = s[j];
    s[j] = temp;
  }
}
char maximum_occur_char(string s)
{
  int table[26] = {0};
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    table[s[i] - 'a']++;
  }
  char max = 'a';
  int index = INT_MIN;

  for (int i = 0; i < 26; i++)
  {
    if (table[i] > index)
    {
      index = table[i];
      max = i + 'a';
    }
  }
  return max;
}
int binary_substing_efficient_apprch(string s)
{
  // calculate the substring which start and end with 1;

  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      count++;
    }
  }
  // we can perform simple maths like count!/(count-2)!*count!;
  int res = (count * (count - 1)) / 2;
  return res;
}
int binary_substring_naive(string s)
{
  int count = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '1')
    {
      for (int j = i + 1; j < s.size(); j++)
      {
        if (s[j] == '1')
        {
          count++;
        }
      }
    }
  }
  return count;
}
int anagram(string s1, string s2)
{
  int char1[26] = {0};
  int char2[26] = {0};
  for (int i = 0; i < s1.size(); i++)
  {
    char1[s1[i] - 'a']++;
  }
  for (int i = 0; i < s2.size(); i++)
  {
    char2[s2[i] - 'a']++;
  }
  int count = 0;
  for (int i = 0; i < 26; i++)
  {
    if (char1[i] != char2[i])
    {
      count += abs(char1[i] - char2[i]);
    }
  }
  return count;
}
bool pallindrome_str(string s)
{
  // s ="aba" then  reverse of s is also aba then 1 else 0 ;
  string temp = s;
  reverse(s.begin(), s.end());
  return s == temp;
}
int min_n_flips(string s)
{

  // s = "1101" - > 1010 or 0101 output min flip ie  1 stemp example 2;
  int flip_count = 0;
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] != i % 2 + '0')
      flip_count++;
  }
  return min(flip_count, n - flip_count);
}
string merge_two_srings_coreespondingly(string s1, string s2)
{
  // s1 = "abc" s2 = "fgh"  output = afbgch
  int i = 0, j = 0;
  string s3;
  while (i < s1.size() && j < s2.size())
  {
    s3.push_back(s1[i]);
    s3.push_back(s2[j]);
    i++;
    j++;
  }
  while (i < s1.size())
  {
    s3.push_back(s1[i]);
    i++;
  }
  while (j < s2.size())
  {
    s3.push_back(s2[j]);
    j++;
  }
  return s3;
}
string lower_case(string s)
{
  string s1;
  for (int i = 0; i < s.size(); i++)
  {
    int inde = s[i]+32;
    if(inde>96 && inde<123)
     s1.push_back(char(inde));
     else
     s1.push_back(s[i]);
  }
  return s1;
}
string sum_in_str(string s1, string s2)
{
  string s3;
  int carry=0,num1,num2;
  int i = s1.size()-1,j=s2.size()-1;
  while(i>=0 && j>=0)
  {
    num1=s1[i]-'0';
    num2=s2[j]-'0';
    int sum = num1+num2+carry;
    int res = sum%10;
    carry=sum/10;
    s3.push_back(res+'0');
    i--;
    j--;

  }
  
  while(i>=0)
  {
    num1=s1[i]-'0';
    int sum = num1+carry;
    int res = sum%10;
    carry=sum/10;
    s3.push_back(res+'0');
    i--;
  }
  while(j>=0)
  {
    num2=s2[j]-'0';
    int sum = num2+carry;
    int res = sum%10;
    carry=sum/10;
    s3.push_back(res+'0');
    j--;
  }
  if(carry==1)
  s3.push_back(carry+'0');
  int k=s3.size()-1;
  while(s3[k]=='0'&& k>0)
  {
    s3.pop_back();
    k--;
  }
  reverse(s3.begin(),s3.end());
  return s3;
 
}
int lenght_longest_substring(string s)
{
  int count =0;
  int table[26]={0};
  for(int i=0;i<26;i++)
  {
    table[s[i]+'a']++;
  }
  


}
int main()
  {
    // string samp = "cacb";
    // cout<<maximum_occur_char(samp);
    //   string a="1101";
    //  cout<< binary_substring_naive(a);
    //  cout<< binary_substring_naive(a);
    // string s1 ="cddgk";
    // string s2 = "gcd";
    // cout<<anagram(s1,s2);
    // string s ="1371";
    // cout<<pallindrome_str(s);
    // string s ="11101100101";
    // cout<< min_n_flips(s);
    // string s1="hlo";
    // string s2 ="el";
    // cout<<merge_two_srings_coreespondingly(s1,s2);
    // string s ="HeRe";
    //  cout<< lower_case(s);

    string s1 = "00";
    string s2="000";
    cout<< sum_in_str(s1,s2);
 
    
    return 0;
  }