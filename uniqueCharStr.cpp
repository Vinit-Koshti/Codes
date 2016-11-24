//check whether sting contains unique char 
//hash used so complexcity is O(n) where n is size of string

#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isUniqueChar(string input )
{
    vector <bool> char_set(128, 0);
    int ascii_alpha;
    
    for (int i=0; i<input.length() ; i++)
    {
        ascii_alpha = input[i];
        
        if (0 <= ascii_alpha <=127 )
        {
        
            if (char_set[ascii_alpha])
            {
                return false;
            }

            char_set[ascii_alpha]= true;
            //cout << input[i] << " ";
        }
        else return false;
    }
    return true;
}

int main()
{
    string input ;
    cout << "Please enter a string of alphabets: ";
    cin >> input;

    if(isUniqueChar(input))
    {
        cout << "Input Contains unique characters:" << endl ;
    }
    else 
    {
        cout << "Input do not Contains unique characters:" << endl ;
    }


    /*
    for (int i=0; i<128 ; i++)
    {
        //ascii_alpha = input[i];
        //char_set[ascii_alpha]++;
        cout << char_set[i] << " ";
    }*/
    
}