// GFG question - N meetings in one room
// https://www.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1

#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.second < b.second;
}

int minMeetings(int st[], int end[], int n){
    vector<pair<int,int> > time;
    for(int i=0; i<n; i++){
        time.push_back({st[i],end[i]});
    }
    // after making time pair of start and end
    //ab sort krna h time pair ko acc to end time by using comparator in sort
    sort(time.begin(), time.end(), cmp);

    int count = 1;
    int prevStart = time[0].first;
    int prevEnd = time[0].second;

    for(int i=0; i<n ; i++){
        int currStart = time[i].first;
        int currEnd = time[i].second;

        if(prevEnd < currStart){
            // include current meeting
            count++;
            prevStart = currStart;
            prevEnd = currEnd;
        }
    }
    return count;


}

int main(){
    int st[] ={1,3,0,5,8,5};
    int end[] ={2,4,6,7,9,9};
    int n=6;
    int ans = minMeetings(st,end,n);
    cout<< "Final Ans: " << ans<<  endl;
}