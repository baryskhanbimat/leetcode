const int SZ = 10000;

class MyHashMap {
public:
    /** Initialize your data structure here. */

    

    vector < pair <int, int > > H[SZ];
    /* 
        first -> key
        second -> value



        pair <string, int> 
        a.first
        a.second
    */
    MyHashMap() {
        
    }
    
    /*
        put(key, value) : Insert a (key, value) pair into the HashMap. If the value already exists in the HashMap, update the value.
        get(key): Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
        remove(key) : Remove the mapping for the value key if this map contains the mapping for the key.

    */

    /** value will always be non-negative. */

    int hash(unsigned long long key) {
        return (key * key + 13 * key) % SZ;
    }
    void put(int key, int value) {
        int new_key = hash(key);
        for (int i = 0; i < H[new_key].size(); i++) {
            if (H[new_key][i].first == key) {
                H[new_key][i].second = value;
                return;
            }
        }
        H[new_key].push_back({key, value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        int new_key = hash(key);
        for (int i = 0; i < H[new_key].size(); i++) {
            if (H[new_key][i].first == key) {
                return H[new_key][i].second;
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int new_key = hash(key);
        for (int i = 0; i < H[new_key].size(); i++) {
            if (H[new_key][i].first == key) {
                H[new_key].erase(H[new_key].begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
