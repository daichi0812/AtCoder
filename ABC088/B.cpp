/*
    Card Game for Two
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> card(N);
    int pointsOfAlice = 0;
    int pointsOfBob = 0;

    for(int i = 0; i < N; i++){
        cin >> card.at(i);
    }

    sort(card.begin(), card.end(), greater<int>());
    
    for(int i = 0; i < N; i++){
        // turn of Alice
        if(i % 2 == 0){
            pointsOfAlice += card.at(i);
        }else{
            pointsOfBob += card.at(i);
        }
    }

    int result = pointsOfAlice - pointsOfBob;

    cout << result << endl;
    
}