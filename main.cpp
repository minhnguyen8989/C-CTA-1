#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_LENGTH = 200;

    char firstString[MAX_LENGTH];
    char secondString[MAX_LENGTH];
    char combinedString[MAX_LENGTH];

    cout << "String Combiner Program\n\n";

    for (int i = 1; i <= 3; i++) {
        cout << "Concatenate #" << i << ":\n";

        cout << "Enter Your First String: ";
        cin.getline(firstString, MAX_LENGTH);

        cout << "Enter Your Second String: ";
        cin.getline(secondString, MAX_LENGTH);

        strcpy(combinedString, firstString);

        strcat(combinedString, " ");

        strcat(combinedString, secondString);

        cout << "Combined: " << combinedString << "\n\n";
    }

    cout << "Done. Goodbye!\n";

    return 0;
}
