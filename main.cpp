#include <stdio.h>
#include <iostream> //needed for 'cout'.
#include <string> //need for 'String' datatype declaration.
using namespace std;

int main()
{
    string fourAlphaCharacters;
    fourAlphaCharacters = "abcd";
    
    string twoAlphaCharacters;
    twoAlphaCharacters = "ef";
    
    string sumOfFourPlustwoAlphaCharacters;
    sumOfFourPlustwoAlphaCharacters = fourAlphaCharacters + twoAlphaCharacters;
    
    int lenghtOfFourAlphaCharacters = fourAlphaCharacters.size();
    int lenghtOftwoAlphaCharacters = twoAlphaCharacters.size();
    
    char char0_twoAlphaCharacters = twoAlphaCharacters[0];
    char char1_twoAlphaCharacters = twoAlphaCharacters[1];
    char char0_FourAlphaCharacters = fourAlphaCharacters[0];
    char char1_FourAlphaCharacters = fourAlphaCharacters[1];
    char char2_FourAlphaCharacters = fourAlphaCharacters[2];
    char char3_FourAlphaCharacters = fourAlphaCharacters[3];
    
    cout << lenghtOfFourAlphaCharacters << " " << lenghtOftwoAlphaCharacters << "\n";
    cout << sumOfFourPlustwoAlphaCharacters << "\n";
    cout << char0_twoAlphaCharacters << char1_FourAlphaCharacters << char2_FourAlphaCharacters << char3_FourAlphaCharacters << " " << char0_FourAlphaCharacters << char1_twoAlphaCharacters << "\n\n";
    
	return 0;
}
