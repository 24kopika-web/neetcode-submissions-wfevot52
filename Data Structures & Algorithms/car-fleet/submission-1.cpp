class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int n=position.size();
    vector<pair<int,int>> cars(n);
    for (int i=0;i<n;i++){
        cars[i]={position[i],speed[i]};
    }
    std::sort(cars.rbegin(),cars.rend());
    std::stack <double> time_stack;
    for (int i=0;i<n;i++){
        double time = static_cast<double>(target-cars[i].first)/cars[i].second;
        if(time_stack.empty()){
            time_stack.push(time);
        }
        else{
            if(time>time_stack.top()) {time_stack.push(time);}
            else{
                continue;
            }
        }
    }
    return time_stack.size();
    }
};
