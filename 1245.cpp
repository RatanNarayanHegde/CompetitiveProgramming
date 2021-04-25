
class Solution {
public:
    vector<long long int> getOrder(vector<vector<long long int>>& tasks) {
        vector<long long int> ans;
        // sort(tasks.begin(),tasks.end());
        long long int n=tasks.size();
        vector<pair<long long int,long long int>> tasksInOrder(n);
        for(long long int i=0;i<n;i++){
            tasksInOrder[i].first = tasks[i][0];
            tasksInOrder[i].second = i;
        }
        sort(tasksInOrder.begin(),tasksInOrder.end());
        long long int curr=tasksInOrder[0].first;
        priority_queue<pair<long long int,long long int>, vector<pair<long long int,long long int>> , greater<pair<long long int,long long int>>> alive;
        long long int ind=0;
        while(ind<n && tasksInOrder[ind].first<=curr){
            long long int idx =  tasksInOrder[ind].second;
            alive.push({tasks[idx][1],idx});
            ind++;
        }
        while(!alive.empty()){
            long long int processTime = alive.top().first;
            long long int idx = alive.top().second;
            alive.pop();
            curr+= processTime;
            ans.push_back(idx);
            long long int flag=0;
            while(ind<n && tasksInOrder[ind].first<=curr){
                idx = tasksInOrder[ind].second;
                flag=1;
                alive.push({tasks[idx][1],idx});
                ind++;
            }
            if(ind<n && alive.empty()){
                curr = tasksInOrder[ind].first;
                while(ind<n && tasksInOrder[ind].first<=curr){
                    long long int idx =  tasksInOrder[ind].second;
                    alive.push({tasks[idx][1],idx});
                    ind++;
                }
            }
            // if(flag==0 && ind<n){
            //     curr=tasksInOrder[ind].first;
            //     idx = tasksInOrder[ind].second;
            //     alive.push({tasks[idx][1],idx});
            //     ind++;
            // }
            
        }
        return ans;
    }
};