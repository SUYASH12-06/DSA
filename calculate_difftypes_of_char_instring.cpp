// Write a C++ program that reads a string from the user and calculates the number of vowels, consonants, digits, and special characters in the string. The program should output the counts of each category in the following format: vowel consonant digit special.

// Requirements:

// The input string may contain upper and lowercase letters, digits, spaces, and special characters.
// Vowels are the characters: 'a', 'e', 'i', 'o', 'u' (both lowercase and uppercase).
// Consonants are any alphabetic characters that are not vowels.
// Digits are numerical characters (0-9).
// Special characters include any other symbols or spaces.
// Example:

// Input:
// Hello World! 123

// Output:
// 3 7 3 2

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    // cin>>s;  -->can be used if string doesn't has any space
    getline(cin,s);
      string str="aeiouAEIOU";
    int vow=0 , conso=0 , digi=0 , specials=0;
    for(auto i: s){
        if(isalpha(i)){
               if(str.find(i)!=string::npos){     //i.e., if vowels found in string
                vow++;
               }else{
                conso++;
               }
        }
        else if(isdigit(i)){
              digi++;
        }
        else{
            specials++;
         }
        }

        cout<<"Vowels: "<<vow<<" "<<"Consonants: "<<" "<<conso<<"Digits: "<<" "<<digi<<"Specials: "<<specials;
    }





