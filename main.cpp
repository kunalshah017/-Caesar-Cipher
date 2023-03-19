#include <iostream>
#include <string>
#include <cstring>

using namespace std;
class crypter
{

private:
    char statement[1000], key[1000];

public:
    void GetStatement()
    {
        cout << "\nEnter Data you want to Encrypt - ";
        cin.get(statement, 1000);
    }

    void Encrypt()
    {
        int length = strlen(statement);

        for (int i = 0; i < length; i++)
        {
            if (statement[i] == 'z')
            {
                statement[i] = statement[i] - 25;
            }
            else
            {
                statement[i] = statement[i] + 1;
            }
        }
    }

    void PrintEncryptionKey()
    {

        cout << "\nYour Encrypted key is - " << statement;
    }

    void GetKey()
    {
        cout << "\nEnter your Encrypted key - ";
        cin.get(key, 1000);
    }

    void Decrypt()
    {
        int length = strlen(key);

        for (int i = 0; i < length; i++)
        {
            if (key[i] == 'a')
            {
                key[i] = key[i] + 25;
            }
            else
            {
                key[i] = key[i] - 1;
            }
        }
    }

    void PrintDecryptedData()
    {

        cout << "\nDecrypted Data is - " << key;
    }
};

int main()

{
    char u;
    cout << "Enter 'e' if you want to encrypt data or 'd' if you want to decrypt the key - ";
    cin >> u;
    cin.ignore();
    crypter obj;

    if (u == 'e')
    {
        obj.GetStatement();
        obj.Encrypt();
        obj.PrintEncryptionKey();
    }

    if (u == 'd')
    {
        obj.GetKey();
        obj.Decrypt();
        obj.PrintDecryptedData();
    }

    cout << "\n\n **** Thank you for trying it ****" << endl;
    system("pause");
    return 0;
}