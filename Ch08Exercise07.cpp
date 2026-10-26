
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string candidates[5];
    int votes[5];
    int totalVotes = 0;
    int winner = 0;

    // Enter candidate names and votes
    for (int i = 0; i < 5; i++) {
        cout << "Enter candidate " << i + 1 << "'s last name: ";
        cin >> candidates[i];

        cout << "Enter the number of votes received: ";
        cin >> votes[i];

        totalVotes += votes[i];
    }

    // The candidate with the most votes
    for (int i = 1; i < 5; i++) {
        if (votes[i] > votes[winner]) {
            winner = i;
        }
    }

    // election results
    cout << left << setw(15) << "Candidate"
         << setw(12) << "Votes"
         << "% of Votes\n";

    for (int i = 0; i < 5; i++) {
        double percentage = 0;

        if (totalVotes > 0) {
            percentage = (static_cast<double>(votes[i])
                          / totalVotes) * 100;
        }

        cout << left << setw(15) << candidates[i]
             << setw(12) << votes[i]
             << fixed << setprecision(2)
             << percentage << "%\n";
    }

    cout << "Total: " << totalVotes << endl;
    cout << "Winner of election: " << candidates[winner] << endl;

    return 0;
}
