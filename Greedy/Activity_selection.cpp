class Solution
{
    public:
    
    static bool comp(pair<int, int> a, pair<int, int> b) {
        if(a.second == b.second) {
            return (a.first < b.first);
        } else {
            return (a.second < b.second);
        }
    }
    
    int maxMeetings(int start[], int end[], int n) {
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            v[i] = {start[i], end[i]};
        }
        sort(v.begin(), v.end(), comp);
       int i = 0, j = 1, ans = 0;
        while(j < n) {
            if(v[i].second < v[j].first) {
                ans++;
                i = j;
                j++;
            } else {
                j++;
            }
        }
        // We will Always gonna select the last meeting
        return ans+1;
    }
};
