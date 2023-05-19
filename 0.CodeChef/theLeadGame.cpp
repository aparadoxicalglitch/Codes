#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int cumulative_score_p1 = 0;
    int cumulative_score_p2 = 0;
    int max_lead = 0;
    int winner = 0;
    
    for (int i = 0; i < n; i++) {
        int score_p1, score_p2;
        cin >> score_p1 >> score_p2;
        
        cumulative_score_p1 += score_p1;
        cumulative_score_p2 += score_p2;
        
        int lead = abs(cumulative_score_p1 - cumulative_score_p2);
        
        if (lead > max_lead)
        {
            max_lead = lead;
            if (cumulative_score_p1 > cumulative_score_p2) 
            {
            winner = 1;
            } 
            else
            {
            winner = 2;
            }
        }
    }
    
    cout << winner << " " << max_lead << endl;
    
    return 0;
}