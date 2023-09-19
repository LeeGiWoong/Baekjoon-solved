#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> v;
    for(int i=0;i<score.size();i++) {
        if(v.size() < k) {
            v.push_back(score[i]);
            sort(v.begin(),v.end(),greater<>());
            answer.push_back(v.back());
        }
        else {
            v.push_back(score[i]);
            sort(v.begin(),v.end(),greater<>());
            v.pop_back();
            answer.push_back(v.back());
        }
    }
    return answer;
}