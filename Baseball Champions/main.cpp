#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

// created 6/9/24

using namespace std;

// Function to trim whitespace from a string
string trim(const string& str) {
    size_t first = str.find_first_not_of(" \n\r\t");
    if (first == string::npos) return ""; // No content
    size_t last = str.find_last_not_of(" \n\r\t");
    return str.substr(first, last - first + 1);
}

// Function to convert a string to lowercase
string toLower(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    // Read teams from Teams.txt
    ifstream teamsFile("Teams.txt");
    vector<string> teams;
    string team;

    if (!teamsFile) {
        cerr << "Error opening Teams.txt" << endl;
        return 1;
    }

    cout << "Available Teams:" << endl;
    while (getline(teamsFile, team)) {
        cout << team << endl;
        teams.push_back(trim(team));  // Store the trimmed teams for later comparison
    }
    teamsFile.close();

    // Prompt user for input
    cout << "Enter the name of a team to check their World Series wins: ";
    string userInput;
    getline(cin, userInput);
    userInput = trim(userInput);  // Trim user input

    // Convert user input to lowercase
    string lowerUserInput = toLower(userInput);

    // Read World Series winners from WorldSeriesWinners.txt
    ifstream winnersFile("WorldSeriesWinners.txt");
    if (!winnersFile) {
        cerr << "Error opening WorldSeriesWinners.txt" << endl;
        return 1;
    }

    int winCount = 0;
    string winner;

    while (getline(winnersFile, winner)) {
        // Trim winner names before comparison and convert to lowercase
        string trimmedWinner = trim(winner);
        string lowerWinner = toLower(trimmedWinner);
        
        if (lowerWinner == lowerUserInput) {
            winCount++;
        }
    }
    winnersFile.close();

    // Output results
    if (winCount > 0 && winCount == 1) {
        cout << userInput << " has won the World Series " << winCount << " time from 1950 to 2014." << endl;
    } else if (winCount > 1) {
        cout << userInput << " has won the World Series " << winCount << " times from 1950 to 2014." << endl;
    } else {
        cout << userInput << " did not win the World Series from 1950 to 2014." << endl;
    }

    return 0;
}

