class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int n = 0;
        int first = 0, second;
        int min = 100000;

        for(int i = 0; i<distance.size(); i++){
            n += distance[i];
        }

        if(start < destination){
            for(int i=start; i<destination; i++){
                first += distance[i];
            }
        }
        
        else if(start > destination){
            for(int i=destination; i<start; i++){
                first += distance[i];
            }
        }
        
        second = n - first;

        if(first>second){
            min = second;
        }else if(first<second){
            min = first;
        }

    return min;
    }
};
