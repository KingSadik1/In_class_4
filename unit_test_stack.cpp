#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "stack.h"
#include <queue>
#include <stack>
#include <string>
using namespace std;

TEST_CASE("Test functions"){
    SUBCASE("queue"){
        queue<int> queue_one = queue_push_from_file("a.txt");
        CHECK(queue_one.front() == 4);

        queue<int> queue_two = queue_push_from_file("b.txt");
        CHECK(queue_two.front() == 1);

        queue<int> queue_three = queue_push_from_file("c.txt");
        CHECK(queue_three.front() == 0);

        CHECK(pop_q(queue_one)==9);

        CHECK(pop_q(queue_two)== NULL); //exception will be thrown

        CHECK(pop_q(queue_three)== 0);
    }
    SUBCASE("STACK"){
        stack<int> stack_one = stack_push_from_file("a.txt");
        CHECK(stack_one.top() == 9);

        stack<int> stack_two = stack_push_from_file("b.txt");
        CHECK(stack_two.top() == 1);

        stack<int> stack_three = stack_push_from_file("c.txt");
        CHECK(stack_three.top() == 0);

        CHECK(pop_stack(stack_one) == 9);

        CHECK(pop_stack(stack_two)== NULL); //exception will be thrown

        CHECK(pop_stack(stack_three)== 0); 
    }
}