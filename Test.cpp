// Compile C++
// g++ -o Test Test.cpp
// Zip Folder
// zip -r Test.zip Files
// Remove Folder
// rm -r Files/...

#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>

using namespace std;

// Setup ur function here
typedef struct mahasiswa
{
    string nama;
    string prodi;
    string hobi;
    int semester;
} identitas;

int main()
{
    // Setup filename
    char filename[27];
    int count = 0;
    bool check = true;

    while (check)
    {
        // Opening files
        ofstream input;
        sprintf(filename, "Files/input/input%03i.txt", count);
        input.open(filename);
        if (!input)
        {
            return 1;
        }
        ofstream output;
        sprintf(filename, "Files/output/input%03i.txt", count);
        output.open(filename);
        if (!output)
        {
            return 1;
        }

        printf("Test-case ke %d\n", count++);
        // Insert ur code here ---------------------------------------------------------

            //  Input Section ---------------------------------------------------------------
                identitas diri;
                getline(cin >> ws, diri.nama);
                input << diri.nama << endl;
                getline(cin >> ws, diri.prodi);
                input << diri.prodi << endl;
                cin >> diri.semester;
                input << diri.semester;
                getline(cin >> ws, diri.hobi);
                input << diri.hobi << endl;

            // Output Section --------------------------------------------------------------
                cout << "Hi, nama saya " << diri.nama << "." << endl;
                cout << "Saya berasal dari prodi " << diri.prodi << " dan sekarang semester " << diri.semester;
                cout << ".\nHobi saya adalah " << diri.hobi << endl;
                cout << "Senang berkenalan denganmu" << endl;

                output << "Hi, nama saya " << diri.nama << "." << endl;
                output << "Saya berasal dari prodi " << diri.prodi << " dan sekarang semester " << diri.semester;
                output << ".\nHobi saya adalah " << diri.hobi << "." << endl;
                output << "Senang berkenalan denganmu." << endl;

        // -----------------------------------------------------------------------------

        // Closing Files
        input.close();
        output.close();
        cout << "Y? ";
        cin >> check;
    }

    return 0;
}
