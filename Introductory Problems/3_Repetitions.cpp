// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.
// Constraints

// 1 \le n \le 10^6

// Example
// Input:
// ATTCGGGA

// Output:
// 3

#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna;
    cin >> dna;

    int maxLength = 1, currentLength = 1;
    for (size_t i = 1; i < dna.length(); ++i) {
        if (dna[i] == dna[i - 1]) {
            currentLength++;
        } else {
            currentLength = 1;
        }
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }

    cout << maxLength << endl;
    return 0;
}

