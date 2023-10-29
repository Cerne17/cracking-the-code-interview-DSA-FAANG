#include<bits/stdc++.h> // Since we do not know what all libraries are required, we use this library.
/*
#include<iostream>
#include<vector>
#include<algorithm> // For the sorting algorithm
*/

/* The string class is implemented using ONLY char[]*/

using namespace std;

int main() {
    // Simple string
    string s = "abc";
    cout << s << endl;

    string s2 = "def";
    cout << s2 << endl;

    // String concatination
    string concatination = s + s2;
    cout << concatination << endl;

    // String pointer
    string *sp = new string;
    *sp = "cerne";

    cout << *sp << endl;
    cout << sp << endl;


    // Storing multiple arrays
    vector<string> vect;
    vect.push_back(s);
    vect.push_back(s2);
    vect.push_back("Testing the sorting of the array");
    

    for (int i = 0; i < vect.size(); i++) {
        cout << vect[i] << endl;
        // Sorting the array
        sort(vect[i].begin(), vect[i].end());
        cout << vect[i] << endl;
    }

    // Taking input from the user
    string s3;
    // cin>>s3; // Cin is creating the problem of just taking the string before the space (or tabs or new line).
    getline(cin, s3); // Takes the input from cin and stores it in s3 -> Does not have cin's problem.
    cout<<s3<<endl;

    // Treating the string as an array
    cout<<"Treating strings as arrays."<<endl;
    s3 = "abcabc";
    cout<<s3[0]<<endl;
    s3[0] = 'f';
    cout<<s3<<endl;

    string s4 = s3 + s2; // Concatination
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s4.size()<<endl;
    cout<<s4.length()<<endl;
    // Both size and length are "the same".
    
    // Substring
    cout<<s4.substr(3)<<endl; // Starting from the 3rd index to the end.
    cout<<s4.substr(3, 3)<<endl; // Starting from the 3rd index to the next 3 characters.

    // Find
    cout<<s4.find("def")<<endl; // Returns the index of the first character of the string.
    cout<<s4.find("def", 4)<<endl; // Returns the index of the first character of the string after the 4th index.

    // Converting to string
    int a = 12341234;
    string s6 = to_string(a);
    cout<<s6<<endl;

    // Converting to integer
    a= atoi(s6.c_str());
    cout<<a<<endl;

    // Adding more numbers to a string of integers
    string b = "12341234";
    b.push_back('5');
    cout<<b<<endl;
    b += '6';
    cout<<b<<endl;

    // Just to hold the console.
    string test;
    cin >> test;

    return 0;
}

/*
 * Storing multiple strings: 2D Array of characters
 * char s[10][100]; -> Only has the power of characters and strings
 * vector<string> vector; -> Has the power of vectors and strings
 */

/*
 * cin.getline(nameOfTheVariable, size, delimiter_optional) -> This isn't interesting when working with strings
 * since we don't know the string's size.
*/
