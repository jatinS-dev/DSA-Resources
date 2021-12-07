class Solution 
{
    public:
    
    static bool comp(Job a, Job b) {
        return (a.profit > b.profit);    
    }
    
    pair<int, int> JobScheduling(Job arr[], int n) { 
        sort(arr, arr+n, comp);
        // Find maximum deadline
        int maxi = arr[0].dead;
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i].dead);
        }
        // Create array of with max deadline
        int slot[maxi+1];
        memset(slot, -1, sizeof(slot));
        
        int countJob = 0, maxProfit = 0;
        
        for(int i = 0; i < n; i++) {
            for(int j = arr[i].dead; j > 0; j--) {
                if(slot[j] == -1) {
                    slot[j] = i;
                    countJob++;
                    maxProfit += arr[i].profit;
                    break;
                }
            }
        }
        
        return make_pair(countJob, maxProfit);
    } 
};
