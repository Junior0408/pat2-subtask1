#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Morse code mapping for A-Z
    string morse[26] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
        "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
        "..-", "...-", ".--", "-..-", "-.--", "--.."
    };

    string message;
    string fullMessage = "";

    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, message);

    for (char ch : message) {
        if (ch == ' ') {
            // Space between words in Morse code
            fullMessage += "   "; // 3 spaces for word separation
            continue;
        }

        ch = toupper(static_cast<unsigned char>(ch)); // Ensure uppercase safely
        if (ch >= 'A' && ch <= 'Z') {
            string code = morse[ch - 'A'];
            cout << ch << ": " << code << endl;
            fullMessage += code + " "; // Space between letters
        }
    }

    cout << "\nFull Morse code message: " << fullMessage << endl;
    return 0;
}
