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
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        return mid;
    } else if (arr[mid] < key) {
        return binarySearch(arr, mid + 1, high, key);
    } else {
        return binarySearch(arr, low, mid - 1, key);
    }
}

// ------------------------------------------------------------------------------------------

int main()
{
    // Setup filename
    char filename[27];
    int count = 0;
    bool check = true;
    int max_file = 5;
    
    // Test Case
    int index = 0;
    string peternak[] {"BO~O~O~O~O~O~", "~O~O~OO~O~B", "B~O~OO~O~O~", "O~~O~O~O~OB"};
    
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
            string town = peternak[index++];
            input << town << endl;
            int domba = 0;
            int i = 0;
            while (town[i] != 'B') {
            switch (town[i]){
                case 'O': domba++;
                case '~': i++;
                default : i++;
            }
            }
            i++;
            while (i < town.size()) {
            switch (town[i]){
                case '~': domba++;
                case 'O': i++;
                default : i++;
            }
            }

            cout << domba << " domba tersesat.\n";
            output << domba << " domba tersesat.\n";

            
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
