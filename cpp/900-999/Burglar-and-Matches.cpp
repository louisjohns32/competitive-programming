#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	// use hash map, matches as key and boxes as value
	// sort the keys list, and take as many of the highest as possible
	map<int, int> matchesMap;
	vector<int> keys;

	int burglarCapacity, numContainers;
	int numBoxes, numMatches;
	cin >> burglarCapacity >> numContainers;

	for (int i = 0; i < numContainers; ++i) {
		cin >> numBoxes >> numMatches;
		if (matchesMap.find(numMatches) != matchesMap.end()) {
			// key already in map
			matchesMap.at(numMatches) += numBoxes;
			continue;
		}
		matchesMap.insert({ numMatches, numBoxes });
	}

	// get vector of keys
	for (map<int, int>::iterator iter = matchesMap.begin(); iter != matchesMap.end(); ++iter) {
		keys.push_back(iter->first);
	}
	
	sort(keys.begin(), keys.end(), greater<int>());
	int total = 0;
	int val;

	for (auto& key : keys) {
		val = matchesMap.at(key);
		if (burglarCapacity <= val) {
			total += burglarCapacity * key;
			break;
		} 
		total += key * val;
		burglarCapacity -= val;
	}

	
	cout << total;


	return 0;
}
