#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPermutedPalindromeStr(string input)
{
    vector <int> char_set(128, 0);
    vector <bool> char_set_bool(128, 0);
    int ascii_alpha;
    bool one_odd_flag = false;
    

    for (int i=0; i<input.length() ; i++)
    {
        ascii_alpha = input[i];
        
        if (0 <= ascii_alpha <=127 )
        {
            char_set[ascii_alpha] += 1;
            
        }
        else {
            cout << "input not correct:" << endl;
        }
    }

    for (int j=0; j<128 ; j++)
    {

        //ascii_alpha =  input[j];

        if(char_set[j]%2)
        {
            if (one_odd_flag)
            {
                return false;
            }    
            else
            {
                one_odd_flag = true;
            }
        }
    } 
    if (!one_odd_flag)
        return false;
    return true;

}


int main()
{
    string input ;
    cout << "Please enter a string of alphabets: ";
    cin >> input;

    if(isPermutedPalindromeStr(input))
    {
        cout << "Input str is permuted palindrome." << endl ;
    }
    else 
    {
        cout << "Input str is NOT permuted palindrome" << endl ;
    }


}