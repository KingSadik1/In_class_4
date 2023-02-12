#include <queue>
#include <stack>
#include <string>

using namespace std;

queue<int> queue_push_from_file(string file_name);
int pop_q(queue<int> queue);
stack<int> stack_push_from_file(string file_name);
int pop_stack(stack<int> stack);