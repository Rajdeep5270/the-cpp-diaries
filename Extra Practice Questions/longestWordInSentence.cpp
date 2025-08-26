#include <iostream>
using namespace std;

int main()
{
    char sen[60];

    cout << "Enter Sentence : ";
    gets(sen);

    char word[60];
    int max = 0, k = 0;

    for (int i = 0; sen[i] != '\0'; i++)
    {
        int len = 0;
        int j = i;

        while (sen[j] != ' ' && sen[j] != '\0') {
            len++;
            j++;
        }

        if (len > max) {
            max = len;
            k = 0;
            for (int p = i; p < j; p++) {
                word[k++] = sen[p];
            }
            word[k] = '\0';
        }

        i = j;
    }

    cout << endl << "Longest Word in Sentence : " << word << endl;

    return 0;
}
