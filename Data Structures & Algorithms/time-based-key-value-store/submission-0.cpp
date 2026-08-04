class TimeMap {
private:
    unordered_map <string, vector<pair<int,string>>> subMap;
public:
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {
        subMap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if (subMap.find(key)==subMap.end()){
            return "";
       }
        int left=0;
        int right=subMap[key].size()-1;
        int mid=0;
        if (timestamp<subMap[key][left].first||subMap[key].empty()){
            return "";
        }
        while (left<=right){
            mid=left+(right-left)/2;
            if (subMap[key][mid].first<=timestamp){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return subMap[key][right].second;
    }
};
