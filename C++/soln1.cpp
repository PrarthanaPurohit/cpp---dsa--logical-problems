#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    string temp;
    cin >> temp; // "shuffled"
    
    vector<string> shuffled(N);
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, shuffled[i]);
    }
    
    cin >> temp; // "original"
    vector<string> original(N);
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, original[i]);
    }
    
    // Map each original instruction to its index
    unordered_map<string, int> pos;
    for(int i = 0; i < N; i++) {
        pos[original[i]] = i;
    }
    
    // Convert shuffled list to array of original indices
    vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        arr[i] = pos[shuffled[i]];
    }
    
    // Find longest contiguous increasing segment
    int maxLen = 1, curLen = 1;
    for(int i = 1; i < N; i++) {
        if(arr[i] == arr[i-1] + 1) {
            curLen++;
        } else {
            curLen = 1;
        }
        maxLen = max(maxLen, curLen);
    }
    
    cout << (N - maxLen) << endl;
    return 0;
}
