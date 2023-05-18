#include <iostream>

using namespace std;

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int N; 
        cin >> N;

        int difficultyRatings[1000]; 

        for (int i = 0; i < N; i++) {
            cin >> difficultyRatings[i];
        }

        int problemsToRemove = 0;

        for (int i = 0; i < N; i++) {
            if (difficultyRatings[i] >= 1000) {
                problemsToRemove++;
            }
        }

        cout << problemsToRemove << endl;
    }

    return 0;
}
