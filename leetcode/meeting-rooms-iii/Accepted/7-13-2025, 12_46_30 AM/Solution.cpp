// https://leetcode.com/problems/meeting-rooms-iii

class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        // Min-heaps: one for available rooms, one for occupied rooms {end time, room}
        priority_queue<int, vector<int>, greater<int>> available;
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> occupied;

        vector<int> count(n, 0);  // Count meetings per room

        for (int i = 0; i < n; ++i)
            available.push(i);

        for (auto& m : meetings) {
            int start = m[0], end = m[1];
            long long duration = end - start;

            // Free up rooms whose meeting ended before current start time
            while (!occupied.empty() && occupied.top().first <= start) {
                available.push(occupied.top().second);
                occupied.pop();
            }

            if (!available.empty()) {
                int room = available.top(); available.pop();
                occupied.emplace(end, room);
                count[room]++;
            } else {
                auto [freeTime, room] = occupied.top(); occupied.pop();
                occupied.emplace(freeTime + duration, room);
                count[room]++;
            }
        }

        // Find the room with maximum meeting count
        int maxCount = 0, answer = 0;
        for (int i = 0; i < n; ++i) {
            if (count[i] > maxCount) {
                maxCount = count[i];
                answer = i;
            }
        }
        return answer;
    }
};
