#include <bits/stdc++.h>

using namespace std;

typedef long long alternateLong;

int main() {
    int numLines; 
    cin >> numLines; 
    
    vector<vector<pair<int, int>>> segmentPaths(numLines);
    map<pair<int, int>, vector<int>> pointToSegmentsMap;

    // Reading line segments
    for (int lineIndex = 0; lineIndex < numLines; lineIndex++) {
        int x1, y1, x2, y2; 
        cin >> x1 >> y1 >> x2 >> y2; 
        
        int deltaX = x2 - x1, deltaY = y2 - y1; 
        int stepCount = max(abs(deltaX), abs(deltaY)); 
        int stepX = (deltaX == 0) ? 0 : deltaX / abs(deltaX); 
        int stepY = (deltaY == 0) ? 0 : deltaY / abs(deltaY); 
        
        // Generating points for the segment
        for (int step = 0; step <= stepCount; step++) { 
            int currentX = x1 + stepX * step; 
            int currentY = y1 + stepY * step; 
            segmentPaths[lineIndex].emplace_back(make_pair(currentX, currentY)); 
            pointToSegmentsMap[{currentX, currentY}].emplace_back(lineIndex); 
        }
    }
    
    cin.ignore(); 
    string inputLine; 
    getline(cin, inputLine); 
    unordered_map<string, int> valueMap;

    // Extract key-value pairs from inputLine
    stringstream ss(inputLine);
    string key;
    int value;

    while (ss >> key) {
        if (key.back() == ':') {
            key.pop_back(); // Remove the colon
            ss >> value; 
            valueMap[key] = value; 
        }
    }

    string targetKey; 
    cin >> targetKey;

    alternateLong totalCost = 0;

    // Calculate total cost based on overlapping segments
    for (auto &entry: pointToSegmentsMap) {
        if (entry.second.size() >= 2) {
            int overlapCount = entry.second.size();
            int minimumCost = INT_MAX;

            for (auto segmentID: entry.second) {
                auto &path = segmentPaths[segmentID];
                auto it = find(path.begin(), path.end(), entry.first);
                int index = distance(path.begin(), it);
                int leftMoves = index;
                int rightMoves = path.size() - index - 1; 
                int moveCost = min(leftMoves, rightMoves);
                minimumCost = min(minimumCost, moveCost);
            }
            totalCost += (alternateLong)overlapCount * minimumCost;
        }
    }

    // Check if targetKey exists in valueMap and compare costs
    if (valueMap.find(targetKey) != valueMap.end()) {
        if (totalCost >= valueMap[targetKey]) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else {
        cout << "No\n";
    }

    int validKeyCount = 0, totalKeyCount = valueMap.size(); 
    for (auto &entry: valueMap) { 
        if (totalCost >= entry.second) { 
            validKeyCount++;
        }
    }

    double successRate = (totalKeyCount > 0) ? (double)validKeyCount / totalKeyCount : 0.0; 
    cout << fixed << setprecision(2) << successRate << endl;

    return 0;
}