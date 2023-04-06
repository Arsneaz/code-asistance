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

// Setup ur function here -------------------------------------------------------------------

// ------------------------------------------------------------------------------------------

int main()
{
    // Setup filename
    char filename[27];
    int count = 0;
    bool check = true;
    int max_file = 5;

    while (check && count <= max_file)
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
        sprintf(filename, "Files/output/output%03i.txt", count);
        output.open(filename);
        if (!output)
        {
            return 1;
        }

        printf("Test-case ke %d\n", count++);
        // Insert ur code here --------------------------------------------------------------

            //  Input Section ---------------------------------------------------------------
                
            // Output Section --------------------------------------------------------------
                
        // -----------------------------------------------------------------------------

        // Closing Files
        input.close();
        output.close();
        cout << "Y? ";
        cin >> check;
        cout << endl;
    }

    return 0;
}
