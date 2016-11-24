//complexcity O(n) where n is length of string 
// hash 

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPermutedStr(string input_1 , string input_2)
{
    vector <int> char_set(128, 0);
    int ascii_alpha;
    
    if (input_1.length()!= input_2.length()) return false;

    for (int i=0; i<input_1.length() ; i++)
    {
        ascii_alpha = input_1[i];
        
        if (0 <= ascii_alpha <=127 )
        {
            char_set[ascii_alpha] += 1;
            
        }
        else {
            cout << "input not correct:" << endl;
        }
    }

    for (int i=0; i<input_2.length() ; i++)
    {
        ascii_alpha = input_2[i];
        
        if (0 <= ascii_alpha <=127 )
        {
            char_set[ascii_alpha] -= 1;
            if(char_set[ascii_alpha] < 0) return false;
            
        }
        else {
            cout << "input not correct:" << endl;
        }
    }


    return true;
}



int main()
{
    string input_1, input_2 ;
    cout << "Please enter a string_1 of alphabets: " << endl;
    cin >> input_1;

    cout << "Please enter a string_2 of alphabets: " << endl;
    cin >> input_2;

    if(isPermutedStr(input_1, input_2))
    {
        cout << "Input Contains permuted characters:" << endl ;
    }
    else 
    {
        cout << "Input do not Contains permuted characters:" << endl ;
    }


}