# Baseball Champions

## Overview

The Baseball Champions program checks the number of World Series wins for a specified baseball team from 1950 to 2014. It reads the team names from a file and compares them to a list of World Series winners to provide the user with accurate information about the team's victories.

## Features

- Reads a list of baseball teams from `Teams.txt`.
- Prompts the user to enter a team name and checks it against World Series winners.
- Displays the number of times the entered team has won the World Series.

## Technologies Used

- C++

## File Structure

```
baseball-champions/
│
├── main.cpp                      # Main C++ source file containing the program logic
├── Teams.txt                     # File containing the names of available baseball teams
├── WorldSeriesWinners.txt        # File containing the names of World Series winners from 1950 to 2014
```

## Getting Started

1. Clone the repository:
   ```bash
   git clone https://github.com/mrochelle23/Baseball-Champions.git
   ```
2. Navigate to the project directory:
   ```bash
   cd Baseball-Champions
   ```
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ main.cpp -o Baseball-Champions
   ```

4. Run the executable:
   ```bash
   ./Baseball-Champions
   ```

## Usage

- The program will display a list of available baseball teams.
- Enter the name of a team when prompted to check how many times they have won the World Series from 1950 to 2014.
- The program will output the number of wins or indicate if the team has not won any championships during that period.

## Example

```
Available Teams:
New York Yankees
Boston Red Sox
San Francisco Giants
...

Enter the name of a team to check their World Series wins: Boston Red Sox
Boston Red Sox has won the World Series 3 times from 1950 to 2014.
```

## Files Explanation

- **Teams.txt**: Contains the names of the baseball teams that can be queried.
- **WorldSeriesWinners.txt**: Lists the teams that won the World Series from 1950 to 2014.

## Future Enhancements

- Implement a feature to allow users to add new teams to `Teams.txt`.
- Include additional statistics about teams, such as total appearances in the World Series.
- Enhance error handling for user input and file operations.
