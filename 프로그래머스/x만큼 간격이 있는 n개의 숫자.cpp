#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
	vector<long long> answer;
	for (long i = 1; i <= n; i++) answer.push_back(i*x);
	return answer;
}