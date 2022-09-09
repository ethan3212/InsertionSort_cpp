#include <iostream>
#include <vector>
using namespace std;

// AVERAGE: (n^2) time | O(1) space
// BEST: O(n) time | O(1) space
// WORST: O(n^2) time | O(1) space
vector<int> insertionSort(vector<int> array) {
    if(array.empty()) {
        return array;
    }
    for(int i = 1; i < array.size(); i++) {
        int j = i;
        while(j > 0 && array[j] < array[j - 1]) {
            swap(array[j], array[j - 1]);
            j--;
        }
    }
    return array;
}

int main() {
    vector<int> input = {8, 5, 2, 9, 5, 6, 3};
    for(int element : input) {
        cout << element << " ";
    }
    cout << endl;
    vector<int> sorted = insertionSort(input);
    for(int element : sorted) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
