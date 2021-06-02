/*STL_STACK_QUEUE_1_INSTANTIATION_OF_A_STACK*/
/*
#include <stack> 
#include <vector> 

int main()
{
	using namespace std; 

	//A stack of integers
	stack<int> numsInStack; 

	//A stack of doubles
	stack <double> dblsInStack;

	//A stack of doubles contained in a vector
	stack <double, vector <double>> doublesStackedInVec;

	//initializing one stack to be a copy of another
	stack <int> numsInStackCopy(numsInStack);

	return 0;
}
*/

/*STL_STACK_QUEUE_2_STACK_OF_INTS*/
/*
#include <stack> 
#include <iostream> 

int main()
{
	using namespace std; 
	stack <int> numsInStack; 

	// push: insert values at top of the stack
	cout << "Pushing {25, 10, -1, 5} on stack in that order:" << "\n"; 
	numsInStack.push (25);
	numsInStack.push (10);
	numsInStack.push (-1);
	numsInStack.push (5);

	cout << "Stack contains " << numsInStack.size() << " elements" << "\n"; 
	while (numsInStack.size() != 0)
	{
		cout << "Popping topmost element: " << numsInStack.top() << "\n";
		numsInStack.pop(); //pop: removes topmost element 
	}

	if (numsInStack.empty()) //true: due to previous pop()s
		cout << "Popping all elements empties stack!" << "\n"; 

	return 0; 
}
*/

/*STL_STACK_QUEUE_3_INSTANTIATION_OF_A_QUEUE*/
/*
#include <queue>
#include <list> 

int main()
{
	using namespace std; 

	//A queue of integers 
	queue <int> numsInQ; 

	//Aqueue of doubles 
	queue <double> dblsInQ;

	//A queue of doubles stored internally in a list 
	queue <double, list <double>> dblsInQInList;

	//one queue created as a copy of another
	queue<int> copyQ(numsInQ);

	return 0;
}
*/

/*STL_STACK_QUEUE_4_QUEUE_OF_INTS*/
/*
#include <queue>
#include <iostream>

int main()
{
	using namespace std; 
	queue <int> numsInQ;

	cout << "Inserting {10, 5, -1, 20} into queue" << "\n"; 
	numsInQ.push(10);
	numsInQ.push(5); //elements are inserted at the end
	numsInQ.push(-1);
	numsInQ.push(20);

	cout << "Queue contains " << numsInQ.size() << " elements" << "\n"; 
	cout << "Element at front: " << numsInQ.front() << "\n";
	cout << "Element at back: " << numsInQ.back() << "\n"; 

	while (numsInQ.size() != 0)
	{
		cout << "Deleting element: " << numsInQ.front() << "\n"; 
		numsInQ.pop(); //removes element at front
	}

	if (numsInQ.empty())
		cout << "The queue is now empty!" << "\n"; 

	return 0; 
}
*/

/*STL_STACK_QUEUE_5_INSTANTIATION_OF_A_PRIORITY_QUEUE*/
/*
#include <queue>
#include <functional>

int main()
{
	using namespace std; 

	//Priority queue of int sorted using std::less <> (default)
	priority_queue <int> numsInPrioQ;

	//A priority queue of doubles
	priority_queue <double> dblsInPrioQ;

	//A priority queue of integers sorted using std::greater <>
	priority_queue <int, deque <int>, greater<int>> numsInDescendingQ; 

	//a priority queue created as a copy of another 
	priority_queue <int> copyQ(numsInPrioQ);

	return 0; 
}
*/

/*STL_STACK_QUEUE_6_PRIORITY_QUEUE*/
/*
#include <queue>
#include <iostream>

int main()
{
	using namespace std; 

	priority_queue <int> numsInPrioQ;
	cout << "Inserting {10, 5, -1, 20} into the priority_queue" << "\n"; 
	numsInPrioQ.push(10);
	numsInPrioQ.push(5);
	numsInPrioQ.push(-1);
	numsInPrioQ.push(20);

	cout << "Deleting the " << numsInPrioQ.size() << " elements" << "\n"; 
	while (!numsInPrioQ.empty())
	{
		cout << "Deleting topmost element: " << numsInPrioQ.top() << "\n"; 
		numsInPrioQ.pop(); 
	}

	return 0;
}
*/

/*STL_STACK_QUEUE_7_PRIORITY_QUEUE_SMALLEST_VALUE_AT_TOP*/
/*
#include <queue>
#include <iostream>
#include <functional>
int main()
{
	using namespace std;

	//Define a priority_queue object with greater <int> as predicate
	priority_queue <int, vector <int>, greater <int>> numsInPrioQ;

	cout << "Inserting {10, 5, -1, 20} into the priority queue" << "\n"; 
	numsInPrioQ.push(10);
	numsInPrioQ.push(5);
	numsInPrioQ.push(-1);
	numsInPrioQ.push(20);

	cout << "Deleting " << numsInPrioQ.size() << " elements" << "\n";
	while (!numsInPrioQ.empty())
	{
		cout << "Deleting topmost element " << numsInPrioQ.top() << "\n"; 
		numsInPrioQ.pop(); 
	}

	return 0;
}
*/