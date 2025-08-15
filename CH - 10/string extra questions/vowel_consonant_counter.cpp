#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;

    cout << endl
         << "Vowels & Consonants Checker" << endl
         << endl;

    cout << "Enter String Here : ";
    getline(cin, name);

    int vowel = 0, consonant = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'A' || name[i] == 'e' || name[i] == 'E' || name[i] == 'I' || name[i] == 'i' || name[i] == 'O' || name[i] == 'o' || name[i] == 'u' || name[i] == 'U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }

    cout << endl
         << "Vowel : " << vowel << endl
         << "Consonant : " << consonant << endl;
}