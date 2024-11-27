#include<vector>
#include<list>
using namespace std;;

class MyHashMap {

    static const int SIZE = 1000;
    vector<list<pair<int, int>>> buckets = vector<list<pair<int, int>>>(SIZE);

    int hash(int key) {
        return key % SIZE;
    }

public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        int index = hash(key);
        for (auto& pair : buckets[index]) {
            if (pair.first == key) {
                pair.second = value;
                return;
            }
        }
        buckets[index].emplace_back(key, value);
    }
    
    int get(int key) {
        int index = hash(key);
        for (const auto& pair : buckets[index]) {
            if (pair.first == key) {
                return pair.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        for (auto it = buckets[index].begin(); it != buckets[index].end(); ++it) {
            if (it->first == key) {
                buckets[index].erase(it);
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