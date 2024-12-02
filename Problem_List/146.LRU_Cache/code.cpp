#include<list>
#include<unordered_map>
using namespace std;;

class LRUCache {

private:
int capacity;
list<pair<int, int>> cache;
unordered_map<int, list<pair<int, int>>::iterator> map;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(map.find(key) == map.end())
            return -1;

        auto it = map[key];
        int value = it->second;
        cache.erase(it);
        cache.push_front({key, value});
        map[key] = cache.begin();

        return value;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end()){
            cache.erase(map[key]);
        }else if(cache.size() == capacity){
            auto last = cache.back();
            map.erase(last.first);
            cache.pop_back();
        }
        cache.push_front({key, value});
        map[key] = cache.begin();
    }
    
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */