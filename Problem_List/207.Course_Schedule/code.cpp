#include<vector>
#include<queue>
using namespace std;;

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses, 0);

        for(auto &prereq : prerequisites){
            int course = prereq[0];
            int pre = prereq[1];

            graph[pre].push_back(course);
            indegree[course]++;
        }

        queue<int> q;
        for(int i = 0; i < numCourses; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        int completedCourse = 0;
        while(!q.empty()){
            int current = q.front();
            q.pop();
            completedCourse++;

            for(int neighbor : graph[current]){
                indegree[neighbor]--;
                if(indegree[neighbor] == 0){
                    q.push(neighbor);
                }
            }
        }

        return completedCourse == numCourses;
    }
};